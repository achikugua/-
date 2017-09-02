#include "stone.h"
#include "water.h"
#include "tool.h"
#include <cstdlib>
#include <iostream>
using namespace std;
	/*����rand����������꣬�����䷶Χ������2-29�ڣ����ڵ�ͼ�ڣ������õ������빷�ص��������»�ȡ��
	ͬʱÿ6��ʯͷ�ͳ���һ����ʱˮ��*/
	
void Water::DrawWater(Dog& cdog,Stone& cstone)//������ʱˮ��
{
	SetCursorPosition(3, 0);
	SetColor(11);
	cout << "ˮ��------------------------------------------";//������
	progress_bar = 42;
	while (true)
	{
		int tmp_x = rand() % 30;
		int tmp_y = rand() % 30;
		if (tmp_x < 2) tmp_x += 2;
		if (tmp_y < 2) tmp_y += 2;
		bool flag = false;
		for (int i = 0; i < 6; i++)
		{
			if (((cdog.dog.X == tmp_x) && (cdog.dog.Y == tmp_y)) || ((cstone.stones[i].X == tmp_x) && (cstone.stones[i].Y == tmp_y)))
			{
				flag = true;
				break;
			}
		}
		if (flag)
			continue;
		water_x = tmp_x;
		water_y = tmp_y;
		SetCursorPosition(water_x, water_y);
		SetColor(18);
		cout << "ˮ";
		cnt++;
		water_flag = true;
		flash_flag = true;
		break;
	}
}

void Water::FlashWater()//��˸��ʱˮ��
{
	SetCursorPosition(water_x, water_y);
	SetColor(18);
	if (flash_flag)
	{
		cout << "  ";
		flash_flag = false;
	}
	else
	{
		cout << "ˮ";
		flash_flag = true;
	}

	SetCursorPosition(26, 0);
	SetColor(11);
	for (int i = 42; i >= progress_bar; --i)//����������
	{
		cout << "\b \b";
	}
	--progress_bar;
	if (progress_bar == 0) 
	{
		SetCursorPosition(water_x, water_y);
		cout << "  ";
		water_flag = false;
		water_x = 0;
		water_y = 0;
	}
}

bool Water::GetWaterFlag()
{
	return water_flag;
}

int Water::GetProgressBar()
{
	return progress_bar;
}

int Water::Getwater_x()
{
	return water_x;
}

int Water::Getwater_y()
{
	return water_y;
}