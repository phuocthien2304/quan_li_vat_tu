#pragma once
#include<iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <string.h>
#include <windows.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <string>
#include <cstdlib> // rand, srand
#include <ctime>
#include <conio.h>
#include <sstream>
#include <cstring>
#include <map>
#include "mylib.cpp"
//#define KEY_NONE	-1
#define Enter 13
//const int WHITE=15;
#define PASSWORD "abcdef"
//const int WHITE=15;


//char* Pwd () {
//     char S[40]; int i=0;
//     while ((S[i]= getch()) != Enter ) 
//     { printf ("%c", '*') ; i++ ; 
//     }
//     S[i]='\0';
//     return S;
//}
//
//int CheckPwd () {
//    int dem =0; 
//    for ( dem =1 ; dem <=3 ; dem++)
//    { printf( "Password :"); 
//      if (strcmp(Pwd(),PASSWORD) ==0)   return 1;
//      else printf ( "\nPassword sai. Hay nhap lai\n")  ; 
//    }
//    return 0;  
//}


void gotoxy(short x,short y)
{
    HANDLE hConsoleOutput;
    COORD Cursor_an_Pos = { x,y};
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}  

int wherex( void )
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
    return screen_buffer_info.dwCursorPosition.X;
}

int wherey( void )
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
    return screen_buffer_info.dwCursorPosition.Y;
}
void clreol( ) {
COORD coord;
DWORD written;
CONSOLE_SCREEN_BUFFER_INFO info;
GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
coord.X = info.dwCursorPosition.X;
coord.Y = info.dwCursorPosition.Y;
FillConsoleOutputCharacter (GetStdHandle(STD_OUTPUT_HANDLE), ' ',
  info.dwSize.X - info.dwCursorPosition.X * info.dwCursorPosition.Y, coord, &written);
gotoxy (info.dwCursorPosition.X , info.dwCursorPosition.Y );
}

void SetColor(WORD color)
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    wAttributes &= 0xfff0;
    wAttributes |= color;

    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
void SetBGColor(WORD color)
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    color <<= 4;
    wAttributes &= 0xff0f;
    wAttributes |= color;

    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
void clrscr() {
	system("cls");
}


////////////////////////////////////
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}
//
//// Hàm tô màu.
void textcolor(int x)
{
	HANDLE mau;
	mau=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}
//
//void gotoxyT(int x,int y)
//{    
//	HANDLE hConsoleOutput;    
//	COORD Cursor_an_Pos = {x-1,y-1};   
//	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);    
//	SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
//}
//void gotoXY(int x, int y)
//{
//	HANDLE hConsoleOutput;
//	COORD Cursor_an_Pos = { x, y };
//	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
//}
//// Hàm xóa màn hình.
//void XoaManHinh()
//{
//	HANDLE hOut;
//	COORD Position;
//	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
//	Position.X = 0;
//	Position.Y = 0;
//	SetConsoleCursorPosition(hOut, Position);
//}
//
//int whereX()
//{
//	CONSOLE_SCREEN_BUFFER_INFO csbi;
//	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
//		return csbi.dwCursorPosition.X;
//	return -1;
//}
////========= l?y t?a d? y c?a con tr? hi?n t?i =======
//int whereY()
//{
//	CONSOLE_SCREEN_BUFFER_INFO csbi;
//	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
//		return csbi.dwCursorPosition.Y;
//	return -1;
//}
//
////============== làm ?n tr? chu?t ===========
//void ShowCur(bool CursorVisibility)
//{
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	CONSOLE_CURSOR_INFO cursor = { 1, CursorVisibility };
//	SetConsoleCursorInfo(handle, &cursor);
//}
////======= tr? v? mã phím ngu?i dùng b?m =========
//int inputKey()
//{
//	if (_kbhit())
//	{
//		int key = _getch();
//
//		if (key == 224)
//		{
//			key = _getch();
//			return key + 1000;
//		}
//
//		return key;
//	}
//	else
//	{
//		return KEY_NONE;
//	}
//
//	return KEY_NONE;
//}
//
//
//
//
////
//}


















