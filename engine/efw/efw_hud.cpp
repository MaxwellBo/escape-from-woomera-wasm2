#include <stdio.h>
#include "hud.h"
#include "cl_util.h"
#include "parsemsg.h"

static int g_hope = 100;
static char g_lines[8][256];
static int g_nlines = 0;
static int g_diaryOn = 0;
static int g_diaryId = 0;
static int g_diaryLoaded = -1;
static HSPRITE g_diarySpr = 0;

static int MsgFunc_EFWShow(const char *name, int size, void *buf)
{
	BEGIN_READ(buf, size);
	int kind = READ_BYTE();
	if (kind == 1) {
		g_hope = READ_BYTE();
		return 1;
	}
	if (kind == 3) {
		g_hope = READ_BYTE();
		g_diaryId = READ_BYTE();
		g_diaryOn = 1;
		g_nlines = 0;
		return 1;
	}
	if (kind != 2) return 1;
	g_diaryOn = 0;
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

void EfwHud_Redraw()
{
	SCREENINFO si;
	si.iSize = sizeof(si);
	gEngfuncs.pfnGetScreenInfo(&si);
	char hope[32];
	snprintf(hope, sizeof(hope), "Hope %d", g_hope);
	gEngfuncs.pfnDrawSetTextColor(0.95f, 0.85f, 0.45f);
	gEngfuncs.pfnDrawConsoleString(12, 12, hope);
	if (g_diaryOn && g_diaryId > 0) {
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
		}
	}
	int y = si.iHeight - 28 - g_nlines * 16;
	if (y < 40) y = 40;
	for (int i = 0; i < g_nlines; i++) {
		gEngfuncs.pfnDrawSetTextColor(0.9f, 0.9f, 0.85f);
		gEngfuncs.pfnDrawConsoleString(24, y, g_lines[i]);
		y += 16;
	}
}

int EfwHud_Key(int down, int keynum)
{
	if (!down || g_nlines <= 0) return 1;
	if (keynum >= '1' && keynum <= '9') {
		char cmd[32];
		snprintf(cmd, sizeof(cmd), "efw_pick %d\n", keynum - '0');
		gEngfuncs.pfnClientCmd(cmd);
		return 0;
	}
	return 1;
}
