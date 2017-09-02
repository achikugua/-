#include <iostream>
#include <iomanip>
#include "times.h"
#include "tool.h"
using namespace std;

void Times::PutMinS(double a, double b)
{
	minute = a;
	second = b;
}

bool Times:: CountDown()
{
		if (second == 0.0)
		{
			if (minute == 0.0)
			{
				SetCursorPosition(32, 3);
				cout << "距离下一关开启还有:";
				SetCursorPosition(33, 4);
				cout << setw(2) <<0 << "分" << setw(2) << 0 << "秒";
				Sleep(200);
				SetCursorPosition(30, 15);
				cout << "门";
				return true;
			}
			if (minute > 0)
			{
				SetCursorPosition(32, 3);
				cout << "距离下一关开启还有:";
				SetCursorPosition(33, 4);
				cout << setw(2) << minute << "分" << setw(2) << second << "秒";
				Sleep(1000);
				second = 59;
				minute--;
				return false;
			}
		}
		else if (second > 0 )
		{
			if (cnt % 5 == 0)
			{
				SetCursorPosition(32, 3);
				cout << "距离下一关开启还有:";
				SetCursorPosition(33, 4);
				cout << setw(2) << minute << "分" << setw(2) << second << "秒";
			}			
			second -= 0.2;
			Sleep(200);
			cnt++;
			return false;
		}
		else
		{
			SetCursorPosition(32, 3);
			cout << "距离下一关开启还有:";
			SetCursorPosition(33, 4);
			cout << setw(2) << minute << "分" << setw(2) << 0 << "秒";
			Sleep(200);
			if (minute == 0)
			{
				SetCursorPosition(30, 15);
				cout << "门";
			}
			if (minute > 0)
			{
				second = 0;
			}	
			return true;
		}
}

bool Times::OverDown()
{
	if (second == 0.0)
	{
		if (minute == 0.0)
		{
			SetCursorPosition(32, 3);
			cout << "距离终点门开启还有:";
			SetCursorPosition(33, 4);
			cout << setw(2) << 0 << "分" << setw(2) << 0 << "秒";
			Sleep(200);
			SetCursorPosition(30, 15);
			cout << "门";
			return true;
		}
		if (minute > 0)
		{
			SetCursorPosition(32, 3);
			cout << "距离终点门开启还有:";
			SetCursorPosition(33, 4);
			cout << setw(2) << minute << "分" << setw(2) << second << "秒";
			Sleep(1000);
			second = 59;
			minute--;
			return false;
		}
	}
	else if (second > 0)
	{
		if (cnt % 5 == 0)
		{
			SetCursorPosition(32, 3);
			cout << "距离终点门开启还有:";
			SetCursorPosition(33, 4);
			cout << setw(2) << minute << "分" << setw(2) << second << "秒";
		}
		second -= 0.2;
		Sleep(200);
		cnt++;
		return false;
	}
	else
	{
		SetCursorPosition(32, 3);
		cout << "距离终点门开启还有:";
		SetCursorPosition(33, 4);
		cout << setw(2) << minute << "分" << setw(2) << 0 << "秒";
		Sleep(200);
		if (minute == 0)
		{
			SetCursorPosition(30, 15);
			cout << "门";
		}
		if (minute > 0)
		{
			second = 0;
		}
		return true;
	}
}

void Times::Start(time_t start)
{
	start_time = start;
}

void Times::Over(time_t over)
{
	over_time = over;
}

void Times::PrintProcess(time_t a)
{
	a = static_cast<int>(a);
	SetColor(11);
	SetCursorPosition(17, 11);
	cout << "全程总计" << setw(2) << a / 60 << "分" << setw(2) << a % 60 << "秒";
}