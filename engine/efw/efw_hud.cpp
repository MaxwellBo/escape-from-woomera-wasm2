#include <stdio.h>
#include <string.h>
#include "hud.h"
#include "cl_util.h"
#include "parsemsg.h"
#include "const.h"
#include "triangleapi.h"
#include "com_model.h"

static int g_hope = 100;
static char g_lines[8][256];
static int g_nlines = 0;
static int g_diaryOn = 0;
static int g_diaryId = 0;
static int g_diaryRead = 0;
static int g_diaryLoaded = -1;
static HSPRITE g_diarySpr = 0;
static int g_boardOn = 0;
static int g_boardNext = 0;
static char g_boardPath[96];
static int g_boardLoaded = 0;
static HSPRITE g_boardSpr = 0;
static float g_boardFade = 0;
static HSPRITE g_greySpr = 0;
static int g_greyLoaded = 0;

struct CtxBtn {
	char label[72];
	char command[96];
	char icon[64];
	float x, y, z;
	int sx, sy;
	int onScreen;
	HSPRITE spr;
	int sprLoaded;
};

static CtxBtn g_ctx[8];
static int g_nctx = 0;

static int MsgFunc_EFWShow(const char *name, int size, void *buf)
{
	BEGIN_READ(buf, size);
	int kind = READ_BYTE();
	if (kind == 1) {
		g_hope = READ_BYTE();
		return 1;
	}
	if (kind == 5) {
		g_nctx = READ_BYTE();
		if (g_nctx > 8) g_nctx = 8;
		if (g_nctx < 0) g_nctx = 0;
		for (int i = 0; i < g_nctx; i++) {
			const char *label = READ_STRING();
			const char *command = READ_STRING();
			const char *icon = READ_STRING();
			g_ctx[i].x = READ_COORD();
			g_ctx[i].y = READ_COORD();
			g_ctx[i].z = READ_COORD();
			g_ctx[i].onScreen = 0;
			g_ctx[i].spr = 0;
			g_ctx[i].sprLoaded = 0;
			int n = 0;
			if (label) while (label[n] && n < 71) { g_ctx[i].label[n] = label[n]; n++; }
			g_ctx[i].label[n] = 0;
			n = 0;
			if (command) while (command[n] && n < 95) { g_ctx[i].command[n] = command[n]; n++; }
			g_ctx[i].command[n] = 0;
			n = 0;
			if (icon) while (icon[n] && n < 63) { g_ctx[i].icon[n] = icon[n]; n++; }
			g_ctx[i].icon[n] = 0;
		}
		return 1;
	}
	if (kind == 3) {
		g_hope = READ_BYTE();
		g_diaryId = READ_BYTE();
		g_diaryRead = READ_BYTE();
		g_diaryOn = 1;
		g_boardOn = 0;
		g_nlines = 0;
		return 1;
	}
	if (kind == 4) {
		g_hope = READ_BYTE();
		const char *path = READ_STRING();
		g_boardNext = READ_BYTE();
		g_boardOn = 1;
		g_diaryOn = 0;
		g_nlines = 0;
		g_nctx = 0;
		if (!path) path = "";
		if (strcmp(g_boardPath, path) != 0) {
			int i = 0;
			for (; path[i] && i < 95; i++) g_boardPath[i] = path[i];
			g_boardPath[i] = 0;
			g_boardLoaded = 0;
			g_boardFade = 0;
		}
		return 1;
	}
	if (kind != 2) return 1;
	g_diaryOn = 0;
	g_boardOn = 0;
	g_hope = READ_BYTE();
	g_nlines = READ_BYTE();
	if (g_nlines > 8) g_nlines = 8;
	for (int i = 0; i < g_nlines; i++) {
		const char *s = READ_STRING();
		int n = 0;
		if (s) {
			while (s[n] && n < 255) {
				g_lines[i][n] = s[n];
				n++;
			}
		}
		g_lines[i][n] = 0;
	}
	return 1;
}

void EfwHud_Init()
{
	gEngfuncs.pfnHookUserMsg("EFWShow", MsgFunc_EFWShow);
}

static void draw_sprite_frame(HSPRITE spr, int frame, int x, int y)
{
	int w = SPR_Width(spr, frame);
	int h = SPR_Height(spr, frame);
	if (w < 1 || h < 1) return;
	wrect_t rc;
	rc.left = 0;
	rc.top = 0;
	rc.right = w;
	rc.bottom = h;
	SPR_Set(spr, 255, 255, 255);
	SPR_Draw(frame, x, y, &rc);
}

// 0x100436c0 tiles sprites/efw_grey.spr across the screen behind the mosaic.
static void tile_grey(int sw, int sh)
{
	if (!g_greyLoaded) {
		g_greySpr = SPR_Load("sprites/efw_grey.spr");
		g_greyLoaded = 1;
	}
	if (!g_greySpr) {
		FillRGBA(0, 0, sw, sh, 40, 40, 40, 255);
		return;
	}
	int w = SPR_Width(g_greySpr, 0);
	int h = SPR_Height(g_greySpr, 0);
	if (w < 1) w = 16;
	if (h < 1) h = 16;
	for (int y = 0; y < sh; y += h)
		for (int x = 0; x < sw; x += w)
			draw_sprite_frame(g_greySpr, 0, x, y);
}

// 0x10043750 lays the sprite's frames on a 4 by 3 grid inside an 800x600
// picture, then centres that picture. The frames are the tiles, not a film.
static void draw_storyboard(int sw, int sh)
{
	static const int cellX[12] = {0, 256, 512, 768, 0, 256, 512, 768, 0, 256, 512, 768};
	static const int cellY[12] = {0, 0, 0, 0, 256, 256, 256, 256, 512, 512, 512, 512};
	tile_grey(sw, sh);
	if (!g_boardLoaded) {
		g_boardSpr = SPR_Load(g_boardPath);
		g_boardLoaded = 1;
	}
	if (!g_boardSpr) return;
	int frames = SPR_Frames(g_boardSpr);
	if (frames > 12) frames = 12;
	int ox = (sw - 800) / 2;
	int oy = (sh - 600) / 2;
	for (int i = 0; i < frames; i++)
		draw_sprite_frame(g_boardSpr, i, ox + cellX[i], oy + cellY[i]);
	if (g_boardFade < 1.0f) g_boardFade += 0.1f;
	if (g_boardFade > 1.0f) g_boardFade = 1.0f;
	if (g_boardNext && g_boardFade >= 1.0f) {
		int x = sw - 300;
		int y = sh - 115;
		if (x < 8) x = 8;
		if (y < 8) y = 8;
		gEngfuncs.pfnDrawSetTextColor(1, 1, 1);
		gEngfuncs.pfnDrawConsoleString(x, y, "Press left mouse button to continue");
	}
}

static void project_context(int sw, int sh)
{
	for (int i = 0; i < g_nctx; i++) {
		g_ctx[i].onScreen = 0;
		if (!gEngfuncs.pTriAPI || !gEngfuncs.pTriAPI->WorldToScreen) continue;
		float world[3] = {g_ctx[i].x, g_ctx[i].y, g_ctx[i].z};
		float screen[3];
		if (gEngfuncs.pTriAPI->WorldToScreen(world, screen)) continue;
		int x = (int)((1.0f + screen[0]) * 0.5f * sw);
		int y = (int)((1.0f - screen[1]) * 0.5f * sh);
		if (x < 8 || y < 8 || x > sw - 8 || y > sh - 8) continue;
		g_ctx[i].sx = x;
		g_ctx[i].sy = y;
		g_ctx[i].onScreen = 1;
		if (!g_ctx[i].sprLoaded && g_ctx[i].icon[0]) {
			g_ctx[i].spr = SPR_Load(g_ctx[i].icon);
			g_ctx[i].sprLoaded = 1;
		}
	}
}

static void draw_context()
{
	for (int i = 0; i < g_nctx; i++) {
		if (!g_ctx[i].onScreen) continue;
		int x = g_ctx[i].sx;
		int y = g_ctx[i].sy;
		if (g_ctx[i].spr)
			draw_sprite_frame(g_ctx[i].spr, 0, x, y);
		char numbered[80];
		snprintf(numbered, sizeof(numbered), "%d %s", i + 1, g_ctx[i].label);
		gEngfuncs.pfnDrawSetTextColor(0.95f, 0.9f, 0.7f);
		gEngfuncs.pfnDrawConsoleString(x + 20, y, numbered);
	}
}

static void run_context(int index)
{
	if (index < 0 || index >= g_nctx || !g_ctx[index].command[0]) return;
	char cmd[110];
	snprintf(cmd, sizeof(cmd), "%s\n", g_ctx[index].command);
	gEngfuncs.pfnClientCmd(cmd);
}

void EfwHud_Redraw()
{
	SCREENINFO si;
	si.iSize = sizeof(si);
	gEngfuncs.pfnGetScreenInfo(&si);
	if (g_boardOn && g_boardPath[0]) {
		draw_storyboard(si.iWidth, si.iHeight);
	}
	if (g_diaryOn && g_diaryId > 0 && !g_boardOn) {
		if (g_diaryLoaded != g_diaryId) {
			char sprite[64];
			snprintf(sprite, sizeof(sprite), "sprites/efw_diary_%02d.spr", g_diaryId);
			g_diarySpr = SPR_Load(sprite);
			g_diaryLoaded = g_diaryId;
		}
		if (g_diarySpr) {
			int w = SPR_Width(g_diarySpr, 0);
			int h = SPR_Height(g_diarySpr, 0);
			int x = (si.iWidth - w) / 2;
			int y = (si.iHeight - h) / 2;
			if (x < 0) x = 0;
			if (y < 0) y = 0;
			wrect_t rc;
			rc.left = 0;
			rc.top = 0;
			rc.right = w;
			rc.bottom = h;
			SPR_Set(g_diarySpr, 255, 255, 255);
			SPR_DrawHoles(0, x, y, &rc);
			if (g_diaryRead) {
				gEngfuncs.pfnDrawSetTextColor(0.45f, 0.75f, 0.45f);
				gEngfuncs.pfnDrawConsoleString(x + 8, y + 8, "Read");
			}
		}
	}
	if (!g_boardOn && !g_diaryOn)
		project_context(si.iWidth, si.iHeight);
	int y = si.iHeight - 28 - g_nlines * 16;
	if (y < 40) y = 40;
	for (int i = 0; i < g_nlines; i++) {
		gEngfuncs.pfnDrawSetTextColor(0.9f, 0.9f, 0.85f);
		gEngfuncs.pfnDrawConsoleString(24, y, g_lines[i]);
		y += 16;
	}
	if (!g_boardOn && !g_diaryOn && g_nlines == 0)
		draw_context();
	char hope[32];
	snprintf(hope, sizeof(hope), "Hope %d", g_hope);
	gEngfuncs.pfnDrawSetTextColor(0.95f, 0.85f, 0.45f);
	gEngfuncs.pfnDrawConsoleString(12, 12, hope);
}

static int context_under_crosshair(int sw, int sh)
{
	int cx = sw / 2;
	int cy = sh / 2;
	int best = -1;
	int bestD = 80 * 80;
	for (int i = 0; i < g_nctx; i++) {
		if (!g_ctx[i].onScreen) continue;
		int dx = g_ctx[i].sx - cx;
		int dy = g_ctx[i].sy - cy;
		int d = dx * dx + dy * dy;
		if (d < bestD) {
			bestD = d;
			best = i;
		}
	}
	return best;
}

int EfwHud_Key(int down, int keynum)
{
	if (!down) return 1;
	if (g_boardOn && (keynum == ' ' || keynum == 13 || keynum == 241)) {
		gEngfuncs.pfnClientCmd("efw_board\n");
		return 0;
	}
	if (g_nlines <= 0 && !g_boardOn && !g_diaryOn && g_nctx > 0) {
		if (keynum >= '1' && keynum <= '9') {
			run_context(keynum - '1');
			return 0;
		}
		if (keynum == 241) {
			SCREENINFO si;
			si.iSize = sizeof(si);
			gEngfuncs.pfnGetScreenInfo(&si);
			project_context(si.iWidth, si.iHeight);
			int hit = context_under_crosshair(si.iWidth, si.iHeight);
			if (hit >= 0) {
				run_context(hit);
				return 0;
			}
		}
	}
	if (g_nlines <= 0) return 1;
	if (keynum >= '1' && keynum <= '9') {
		char cmd[32];
		snprintf(cmd, sizeof(cmd), "efw_pick %d\n", keynum - '0');
		gEngfuncs.pfnClientCmd(cmd);
		return 0;
	}
	return 1;
}
