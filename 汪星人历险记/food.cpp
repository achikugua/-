#include "food.h"
#include "tool.h"
#include <cstdlib>
#include <iostream>
using namespace std;

void Food::DrawFood(Dog& cdog, Stone& cstone, Water& cwater)//绘制食物
{
	/*利用rand函数获得坐标，并将其范围限制在2-29内，即在地图内，如果获得的坐标与狗重叠，则重新获取。*/
	while (true)
	{
		int tmp_x = rand() % 30;
		int tmp_y = rand() % 30;
		if (tmp_x < 2) tmp_x += 2;
		if (tmp_y < 2) tmp_y += 2;
		bool flag = false;
		for (int i = 0; i < 6; i++)
		{
			if (((cdog.dog.X == tmp_x) && (cdog.dog.Y == tmp_y)) || ((cstone.stones[i].X == tmp_x) && (cstone.stones[i].Y == tmp_y)) || ((cwater.Getwater_x() == tmp_x) && (cwater.Getwater_y() == tmp_y)))
			{
				flag = true;
				break;
			}
		}
		if (flag)
			continue;
		x = tmp_x;
		y = tmp_y;
		SetCursorPosition(x, y);
		SetColor(13);
		cout << "◎";
		break;
	}
}

int Food::Getfood_x()
{
	return x;
}

int Food::Getfood_y()
{
	return y;
}