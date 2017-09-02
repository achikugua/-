#include "startInterface.h"
#include <windows.h>


void StartInterface::PrintAction()//"��"�ִ��ϵ��м����ʧ��"DogAdv"�����ң�����ͣ���м�
{
	while (wang.back().GetY() < 30)
	{
		ClearWang();//�����������
		PrintWang();//���Ƹ���λ�ú������
		Sleep(speed);
	}

	system("cls");

	while (dogAdv.back().GetX() < 37)
	{
		ClearDogAdv();//�����������
		PrintDogAdv();//���Ƹ���λ�ú������
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
	for (auto& point : wang) //�����ͬʱ���������������ƶ�һ��
	{
		if (point.GetY() >= 0)
			point.Clear();
		point.ChangePosition(point.GetX() , point.GetY()+1);
	}
}

void StartInterface::ClearDogAdv()
{
	for (auto& point : dogAdv) //�����ͬʱ���������������ƶ�һ��
	{
		if (point.GetX() >= 0)
			point.Clear();
		point.ChangePosition(point.GetX() + 1, point.GetY());
	}
}


