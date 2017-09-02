#include "dog.h"
#include <conio.h>
#include "tool.h"
#include <iostream>

void Dog::InitDog()//³õÊ¼»¯¹·
{
	 dog.X = x;
	 dog.Y = y;
	SetCursorPosition(dog.X, dog.Y);
	cout << "狗";
}

bool Dog::OverEdge()//×²µ½Ç½
{
	return (dog.X < 30) &&
		(dog.Y < 30) &&
		(dog.X > 1) &&
		(dog.Y > 1);
}

bool Dog::NormalMove()//¸Ä±ä·½Ïò
{
	if (_kbhit())
	{
		char ch = _getch();
		switch (ch)
		{
		case -32:
			ch = _getch();
			switch (ch)
			{
			case 72://向上
				SetCursorPosition(dog.X, dog.Y);
				cout << " ";
				dog.Y -= 1;
				SetCursorPosition(dog.X, dog.Y);
				cout << "狗";
				break;
			case 80://向下
				SetCursorPosition(dog.X, dog.Y);
				cout << " ";
				dog.Y += 1;
				SetCursorPosition(dog.X, dog.Y);
				cout << "狗";
				break;
			case 75://向左
				SetCursorPosition(dog.X, dog.Y);
				cout << " ";
				dog.X -= 1;
				SetCursorPosition(dog.X, dog.Y);
				cout << "狗";
				break;
			case 77://向右
				SetCursorPosition(dog.X, dog.Y);
				cout << " ";
				dog.X += 1;
				SetCursorPosition(dog.X, dog.Y);
				cout << "狗";
				break;
			default:
				break;
			}
			return true;
		case 27://ESC
			return false;
		default:
			return true;
		}
		}
	return true;
}
bool Dog::GetStone(Stone& cstone)
{
	bool a = false;
	for (int i = 0; i < 6; i++)
	{
		if ((dog.X == cstone.stones[i].X) && (dog.Y == cstone.stones[i].Y))
		{
			return true;
			a = true;
			SetCursorPosition(dog.X,dog.Y);
			cout << "狗";
			COORD a = { 5, 2 };
			COORD b = { 25, 4 };
			cstone.stones[i] = cstone.random(a, b);
			SetCursorPosition(cstone.stones[i].X, cstone.stones[i].Y);
			cout << "▓";
			break;
		}
	}
	if (!a)
	{
		return false;
	}
}

bool Dog::GetWater(Water& cwater)
{
	if ((dog.X == cwater.water_x) && (dog.Y == cwater.water_y))
	{
		cwater.water_flag = false;
		cwater.water_x = 0;
		cwater.water_y = 0;
		SetCursorPosition(1, 0);
		std::cout << "                                                            ";
		return true;
	}
	else
	{
		return false;
	}
		
}

bool Dog::GetFood(Food& cfood)
{
	if ((dog.X == cfood.x) && (dog.Y == cfood.y))
	{
		return true;
		SetCursorPosition(dog.X, dog.Y);
		cout << "狗";
	}
	else
	{
		return false;
	}
}

bool Dog::GetGrass(Grass& cgrass ,Times& ctimes)
{
	if ((dog.X == cgrass.x) && (dog.Y == cgrass.y))
	{
		return true;
		SetCursorPosition(dog.X, dog.Y);
		cout << "狗";
	}
	else
	{
		return false;
	}
}

bool Dog::GetCat(Cat& ccat)
{
	if ((dog.X == ccat.x) && (dog.Y == ccat.y))
	{
		return true;
		SetCursorPosition(dog.X, dog.Y);
		cout << "狗";
	}
	else
	{
		return false;
	}
}