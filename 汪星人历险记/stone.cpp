#include "windows.h"
#include "stone.h"
#include "water.h"
#include "tool.h"
#include <cstdlib>
#include <iostream>
using namespace std;


void Stone::InitStone()//绘制石头
{
	
		COORD a = { 2, 2 };
		COORD b = { 29, 4 };
		for (int i = 0; i<6; i++)
		{
			stones[i] = random(a, b);
			SetCursorPosition(stones[i].X, stones[i].Y);
			cout << "▓";
		}
}

void Stone::StoneMove(Dog &cdog,Water &cwater)//石头向下移动
{
	for (int i = 0; i < 6; i++)
	{
		SetCursorPosition(stones[i].X, stones[i].Y);
		cout << " ";
		++stones[i].Y;
		SetCursorPosition(stones[i].X, stones[i].Y);
		cout << "▓";
		if (stones[i].Y == 29)
		{
			++cnt;
			SetCursorPosition(stones[i].X, stones[i].Y);
			cout << " ";
			COORD a = { 2, 2 };
			COORD b = { 29, 4 };
			stones[i] = random(a, b);
			SetCursorPosition(stones[i].X, stones[i].Y);
			cout << "▓";
		}
	}

}
//在[a, b)之间产生一个随机整数
int Stone::random(int a, int b)
{
	int c = (rand() % (a - b)) + a;
	return c;
}

//在两个坐标包括的矩形框内随机产生一个坐标
COORD Stone::random(COORD a, COORD b)
{
	int x = random(a.X, b.X);
	int y = random(a.Y, b.Y);
	COORD c = {static_cast<SHORT>(x),static_cast<SHORT>(y)};
	return c;
}