#include <stdio.h>
#include "hud.h"
#include "cl_util.h"
#include "parsemsg.h"

static int g_hope = 100;
static char g_lines[8][256];
static int g_nlines = 0;

static int MsgFunc_EFWShow(const char *name, int size, void *buf)
{
	BEGIN_READ(buf, size);
	int kind = READ_BYTE();
	if (kind == 1) {
		g_hope = READ_BYTE();
		return 1;
	}
	if (kind != 2) return 1;
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
