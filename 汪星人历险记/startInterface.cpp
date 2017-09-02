#include "startInterface.h"
#include <windows.h>


void StartInterface::PrintAction()//"汪"字从上到中间后消失，"DogAdv"从左到右，后暂停在中间
{
	while (wang.back().GetY() < 30)
	{
		ClearWang();//清除已有文字
		PrintWang();//绘制更新位置后的文字
		Sleep(speed);
	}

	system("cls");

	while (dogAdv.back().GetX() < 37)
	{
		ClearDogAdv();//清除已有文字
		PrintDogAdv();//绘制更新位置后的文字
		Sleep(speed);
	}
}

void StartInterface::PrintWang()
{
	for (auto& point : wang)
	{
		if (point.GetY() >= 1)
			point.Print();
	}
}

void StartInterface::PrintDogAdv()
{
	for (auto& point : dogAdv)
	{
		if (point.GetX() >= 1)
			point.Print();
	}
}

void StartInterface::ClearWang()
{
	for (auto& point : wang) //清除的同时将文字整体向下移动一格
	{
		if (point.GetY() >= 0)
			point.Clear();
		point.ChangePosition(point.GetX() , point.GetY()+1);
	}
}

void StartInterface::ClearDogAdv()
{
	for (auto& point : dogAdv) //清除的同时将文字整体向右移动一格
	{
		if (point.GetX() >= 0)
			point.Clear();
		point.ChangePosition(point.GetX() + 1, point.GetY());
	}
}


