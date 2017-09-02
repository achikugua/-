#include <iostream>
#include <iomanip>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "controller.h"
#include "tool.h"
#include "startinterface.h"
#include "wall.h"
#include "times.h"
#include "dog.h"
#include "stone.h"
#include "water.h"
#include "food.h"
#include "grass.h"
#include "cat.h"
#include "mmsystem.h"
#pragma  comment(lib,"winmm.lib")
using namespace std;

void Controller::Start()//开始界面
{
	SetWindowSize(42, 32);//设置窗口大小
	Sleep(500);
	SetColor(11);
	SetCursorPosition(10, 3);
	cout << "━━━━━━━━━━━━━━━━━━━━━━━";
	Sleep(30);
	SetCursorPosition(9, 4);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(9, 5);
	cout << " ┃      游戏名称:汪星人历险记 ( DogAdv )      ┃";
	Sleep(30);
	SetCursorPosition(9, 6);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(9, 7);
	cout << " ┃        游戏说明: 方向键控制狗的移动        ┃";
	Sleep(30);
	SetCursorPosition(9, 8);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(9, 9);
	cout << " ┃  狗若撞墙即死,进门除外.狗每砸到1石头扣1分, ┃";
	Sleep(30);
	SetCursorPosition(9, 10);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(9, 11);
	cout << " ┃ 初始分数为2分,分数扣完时狗死亡.狗每吃1食物 ┃";
	Sleep(30);
	SetCursorPosition(9, 12);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(9, 13);
	cout << " ┃  加2分,每喝1滴水加3分,遇草丛如厕加时2秒,   ┃";
	Sleep(30);
	SetCursorPosition(9, 14);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(9, 15);
	cout << " ┃      但后加5分,遇猫打架加时3秒并扣3分.     ┃";
	Sleep(30);
	SetCursorPosition(9, 16);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(9, 17);
	cout << " ┃温馨提示:游戏途中按esc键可暂停并调出游戏规则┃";
	Sleep(30);
	SetCursorPosition(9, 18);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(9, 19);
	cout << " ┃草,食物与猫被石头砸到时会隐藏起来,故若想碰见┃";
	Sleep(30);
	SetCursorPosition(9, 20);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(9, 21);
	cout << " ┃   它们,必须在它们被石头砸到之前记好其位置, ┃";
	Sleep(30);
	SetCursorPosition(9, 22);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(9, 23);
	cout << " ┃同时,每出现5滴水,草和猫将会随机分配一次位置 ┃";
	Sleep(30);
	SetCursorPosition(9, 24);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(9, 25);
	cout << " ┃   而一份食物必须被吃完才会出现另一份食物   ┃";
	Sleep(30);
	SetCursorPosition(9, 26);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(9, 27);
	cout << " ┃                   好的                     ┃";
	Sleep(30);
	SetCursorPosition(9, 28);
	cout << " ┃                                            ┃";
	Sleep(30);
	SetCursorPosition(10, 29);
	cout << "━━━━━━━━━━━━━━━━━━━━━━━";
	SetCursorPosition(20, 27);
	SetBackColor();
	cout << "好的";
	SetCursorPosition(0, 31);

	/*选择部分*/
	while (int right = _getch())
	{
		if (right == 13)
		{
			break;
	     }
	}

	system("cls");

	Sleep(500);
	SetColor(11);
	SetCursorPosition(10, 12);
	cout << "━━━━━━━━━━━━━━━━━━━━━━";
	Sleep(30);
	SetCursorPosition(9, 13);
	cout << " ┃            是否开启游戏音效？            ┃";
	Sleep(30);
	SetCursorPosition(9, 14);
	cout << " ┃                                          ┃";
	Sleep(30);
	SetCursorPosition(9, 15);
	cout << " ┃    好呀好呀        不了，不喜欢音乐      ┃";
	Sleep(30);
	SetCursorPosition(9, 16);
	cout << " ┃                                          ┃";
	Sleep(30);
	SetCursorPosition(10, 17);
	cout << "━━━━━━━━━━━━━━━━━━━━━━";

	SetCursorPosition(12, 15);
	SetBackColor();
	cout << "好呀好呀";
	SetCursorPosition(0, 31);

	/*选择部分*/
	int ch;
	bool flag = false;
	while ((ch = _getch()))
	{
		switch (ch)
		{
		case 75://LEFT
	
				SetCursorPosition(12, 15);
				SetBackColor();
				cout << "好呀好呀";
				SetCursorPosition(20, 15);
				SetColor(11);
				cout << "不了，不喜欢音乐";
				sound = true;
			break;

		case 77://RIGHT
			
				SetCursorPosition(20, 15);
				SetBackColor();
				cout << "不了，不喜欢音乐";
				SetCursorPosition(12, 15);
				SetColor(11);
				cout << "好呀好呀";
				sound = false;
			break;

		case 13://Enter
			flag = true;
			break;

		default:
			break;
		}

		SetCursorPosition(0, 31);
		if (flag)
		{
			break;
		}
	}

	system("cls");

	if (sound)
	{
		PlaySound("狗叫-土耳其进行曲-4371482.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	}
	SetColor(14);//设置开始动画颜色
	StartInterface *start = new StartInterface();//动态分配一个StartInterface类start
	start->PrintAction();//开始动画
	delete start;//释放内存空间

				 /*设置关标位置，并输出提示语，等待任意键输入结束*/
	SetCursorPosition(13, 26);
	cout << "Press any key to start... ";
	SetCursorPosition(13, 27);
	system("pause");
	PlaySound(NULL, NULL, SND_FILENAME);
}

void Controller::Select()//选择界面
{
	/*初始化界面选项*/
	SetColor(3);
	SetCursorPosition(13, 26);
	cout << "                          ";
	SetCursorPosition(13, 27);
	cout << "                          ";
	SetCursorPosition(6, 21);
	cout << "请选择游戏关数：";
	SetCursorPosition(6, 22);
	cout << "(上下键选择,回车确认)";
	SetCursorPosition(27, 22);
	SetBackColor();//第一个选项设置背景色以表示当前选中
	cout << "第一关：落石";
	SetCursorPosition(27, 24);
	SetColor(3);
	cout << "第二关：现食";
	SetCursorPosition(27, 26);
	cout << "第三关：出水";
	SetCursorPosition(27, 28);
	cout << "第四关：如厕";
	SetCursorPosition(27, 30);
	cout << "第五关：遇猫";

	/*上下方向键选择模块*/
	int ch;//记录键入值
	key = 1;//记录选中项，初始选择第一个
	bool flag = false;//记录是否键入Enter键标记，初始置为否
	while ((ch = _getch()))
	{
		switch (ch)//检测输入键
		{
		case 72://UP上方向键
			if (key > 1)//当此时选中项为第一项时，UP上方向键无效
			{
				switch (key)
				{
				case 2:
					SetCursorPosition(27, 22);//给待选中项设置背景色
					SetBackColor();
					cout << "第一关：落石";

					SetCursorPosition(27, 24);//将已选中项取消我背景色
					SetColor(3);
					cout << "第二关：现食";

					--key;
					break;
				case 3:
					SetCursorPosition(27, 24);
					SetBackColor();
					cout << "第二关：现食";

					SetCursorPosition(27, 26);
					SetColor(3);
					cout << "第三关：出水";

					--key;
					break;
				case 4:
					SetCursorPosition(27, 26);
					SetBackColor();
					cout << "第三关：出水";

					SetCursorPosition(27, 28);
					SetColor(3);
					cout << "第四关：如厕";

					--key;
					break;
				case 5:
					SetCursorPosition(27, 28);
					SetBackColor();
					cout << "第四关：如厕";

					SetCursorPosition(27, 30);
					SetColor(3);
					cout << "第五关：遇猫";

					--key;
					break;
				}
			}
			break;

		case 80://DOWN下方向键
			if (key < 5)
			{
				switch (key)
				{
				case 1:
					SetCursorPosition(27, 24);
					SetBackColor();
					cout << "第二关：现食";
					SetCursorPosition(27, 22);
					SetColor(3);
					cout << "第一关：落石";

					++key;
					break;
				case 2:
					SetCursorPosition(27, 26);
					SetBackColor();
					cout << "第三关：出水";
					SetCursorPosition(27, 24);
					SetColor(3);
					cout << "第二关：现食";

					++key;
					break;
				case 3:
					SetCursorPosition(27, 28);
					SetBackColor();
					cout << "第四关：如厕";
					SetCursorPosition(27, 26);
					SetColor(3);
					cout << "第三关：出水";

					++key;
					break;
				case 4:
					SetCursorPosition(27, 30);
					SetBackColor();
					cout << "第五关：遇猫";
					SetCursorPosition(27, 28);
					SetColor(3);
					cout << "第四关：如厕";

					++key;
					break;
				}
			}
			break;

		case 13://Enter回车键
			flag = true;
			break;
		default://无效按键
			break;
		}
		if (flag) break;//输入Enter回车键确认，退出检查输入循环

		SetCursorPosition(0, 31);//将光标置于左下角，避免关标闪烁影响游戏体验
	}
}

int Controller::SelectGames()
{
	switch(key)//根据所选选项设置关数
	{
	case 1:
		return PlayGame1();
		break;
	case 2:
		return PlayGame2();
		break;
	case 3:
		return PlayGame3();
		break;
	case 4:
		return PlayGame4();
		break;
	case 5:
		return PlayGame5();
		break;
	default:
		break;
	}
}

void Controller::DrawGame()//绘制游戏界面
{
	GamesInterface(key);
	system("cls");//清屏

				  /*绘制地图*/
	SetColor(3);
	Map *init_map = new Map();
	init_map->PrintInitmap();
	delete init_map;

	/*绘制侧边栏*/
	SetColor(3);
	SetCursorPosition(34, 1);
	cout << "DogAdvance";
	SetCursorPosition(31, 6);
	cout << "关数:";
	SetCursorPosition(34, 6);
	switch (key)
	{
	case 1:
		cout << "第一关:落石";
		break;
	case 2:
		cout << "第二关:现食";
		break;
	case 3:
		cout << "第三关:出水";
		break;
	case 4:
		cout << "第四关:如厕";
		break;
	case 5:
		cout << "第五关:遇猫";
		break;
	default:
		break;
	}
	SetCursorPosition(32, 8);
	cout << "得分:";
	SetCursorPosition(37, 8);
	cout << "     2";
	SetCursorPosition(33, 10);
	cout << " 方向键移动";
	SetCursorPosition(31, 11);
	cout << " ESC暂停并调出游戏规则";
	
}

int Controller::PlayGame1()//第一关游戏二级循环
{
	if (sound)
	{
		PlaySound("滑稽巴克 _林慧玲.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	}
	Times *times = new Times();
	times->Start(time(NULL));
	srand((unsigned)time(NULL));//设置随机数种子，如果没有食物的出现位置将会固定
	/*初始化狗和食物*/
	Dog *cdog = new Dog();
	Stone *cstone = new Stone();
	Water *cwater = new Water();
	SetColor(6);
	cdog->InitDog();
	cstone->InitStone();
	times->PutMinS(1,0);

	/*游戏循环*/
	while (cdog->OverEdge()) //判断是否撞墙，即是否还有生命
	{
		if (score <= 0)
		{
			/*狗死亡*/
			delete cdog;//释放分配的内存空间
			delete cstone;
			delete cwater;
			times->Over(time(NULL));
			times->PrintProcess(((times->over_time) - (times->start_time)));
			int tmp = GameOver();//绘制游戏结束界面，并返回所选项
			switch (tmp)
			{
			case 1:
				return 1;//重新开始
			case 2:
				return 2;//退出游戏
			default:
				return 2;
			}
			delete times;
		}
		//狗正常移动
		cdog->NormalMove();
		cstone->StoneMove(*cdog, *cwater);
		times->CountDown();
		/*调出选择菜单*/
		if (!cdog->NormalMove()) //按Esc键时
		{
			int tmp = Menu();//绘制菜单，并得到返回值
			switch (tmp)
			{
			case 1://继续游戏
				break;

			case 2://重新开始
				delete cdog;
				delete cstone;
				return 1;//将1作为PlayGame函数的返回值返回到Game函数中，表示重新开始

			case 3://退出游戏
				delete cdog;
				delete cstone;
				return 2;//将2作为PlayGame1函数的返回值返回到Game函数中，表示退出游戏

			default:
				break;
			}
		}

		if (cdog->GetStone(*cstone)) //砸到石头
		{
			UpdateScore(-1);//更新分数，扣一分
			RewriteScore();//重新绘制分数
	
		}
		else
		{
			cdog->NormalMove();//狗正常移动
		}
	}

		if ((times->CountDown()) && (cdog->dog.X == 30) && (cdog->dog.Y == 15))
		{
			times->Over(time(NULL));
			key = 2;
			time1 = ((times->over_time) - (times->start_time)) ;
			while (true)//游戏可视为一个死循环，直到退出游戏时循环结束
			{
				DrawGame();//绘制游戏界面
				int tmp = PlayGame2();;//开启游戏循环，当重新开始或退出游戏时，结束循环并返回值给tmp
				if (tmp == 1) //返回值为1时重新开始游戏
				{
					system("cls");
					continue;
				}
				else if (tmp == 2) //返回值为2时退出游戏
				{
					break;
				}
				else
				{
					break;
				}
			}
		}
		else
		{/*狗死亡*/
			delete cdog;//释放分配的内存空间
			delete cstone;
			delete cwater;
			times->Over(time(NULL));
			times->PrintProcess(((times->over_time) - (times->start_time)));
			int tmp = GameOver();//绘制游戏结束界面，并返回所选项
			switch (tmp)
			{
			case 1:
				return 1;//重新开始
			case 2:
				return 2;//退出游戏
			default:
				return 2;
			}
			delete times;
		}
	
}

int Controller::PlayGame2()//第二关游戏二级循环
{
	if (sound)
	{
		PlaySound("元气散步去 _林慧玲.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	}
	Times *times = new Times();
	times->Start(time(NULL));
	srand((unsigned)time(NULL));//设置随机数种子，如果没有 食物的出现位置将会固定

								/*初始化狗和食物*/
	Dog *cdog = new Dog();
	Stone *cstone = new Stone();
	Water *cwater = new Water();
	Food *cfood = new Food();
	SetColor(6);
	cdog->InitDog();
	cstone->InitStone();
	cfood->DrawFood(*cdog, *cstone, *cwater);
	times->PutMinS(1, 0);

	/*游戏循环*/
	while (cdog->OverEdge()) //判断是否撞墙，即是否还有生命
	{
		if (score <= 0)
		{
			/*狗死亡*/
			delete cdog;//释放分配的内存空间
			delete cstone;
			delete cwater;
			delete cfood;
			times->Over(time(NULL));
			times->PrintProcess(time1 + ((times->over_time) - (times->start_time)));
			int tmp = GameOver();//绘制游戏结束界面，并返回所选项
			switch (tmp)
			{
			case 1:
				return 1;//重新开始
			case 2:
				return 2;//退出游戏
			default:
				return 2;
			}
			delete times;
		}
		
		cdog->NormalMove();
		cstone->StoneMove(*cdog, *cwater);
		times->CountDown();

		/*调出选择菜单*/
		if (!cdog->NormalMove()) //按Esc键时
		{
			int tmp = Menu();//绘制菜单，并得到返回值
			switch (tmp)
			{
			case 1://继续游戏
				break;

			case 2://重新开始
				delete cdog;
				delete cstone;
				delete cwater;
				delete cfood;
				delete times;
				return 1;//将1作为PlayGame函数的返回值返回到Game函数中，表示重新开始

			case 3://退出游戏
				delete cdog;
				delete cstone;
				delete cwater;
				delete cfood;
				delete times;
				return 2;//将2作为PlayGame函数的返回值返回到Game函数中，表示退出游戏

			default:
				break;
			}
		}

		if (cdog->GetStone(*cstone)) //砸到石头
		{
			UpdateScore(-1);//更新分数，扣一分，1为分数权重
			RewriteScore();//重新绘制分数
			
		}
		else
		{
			cdog->NormalMove();//狗正常移动
		}


		if (cdog->GetFood(*cfood)) //吃到食物
		{
			SetCursorPosition(cdog->dog.X, cdog->dog.Y);
			SetColor(14);
			cout << "狗";
			cdog->NormalMove();
			UpdateScore(2);
			RewriteScore();
			cfood->DrawFood(*cdog, *cstone, *cwater);
		}
	}

	if ((times->CountDown()) && cdog->dog.X == 30 && cdog->dog.Y == 15)
	{
		times->Over(time(NULL));
		key = 3;
		time2 = ((times->over_time) - (times->start_time));
		while (true)//游戏可视为一个死循环，直到退出游戏时循环结束
		{
			DrawGame();//绘制游戏界面
			int tmp = PlayGame3();;//开启游戏循环，当重新开始或退出游戏时，结束循环并返回值给tmp
			if (tmp == 1) //返回值为1时重新开始游戏
			{
				system("cls");
				continue;
			}
			else if (tmp == 2) //返回值为2时退出游戏
			{
				break;
			}
			else
			{
				break;
			}
		}
	}
	else
	{/*狗死亡*/
		delete cdog;//释放分配的内存空间
		delete cstone;
		delete cwater;
		delete cfood;
		times->Over(time(NULL));
		times->PrintProcess(time1  + ((times->over_time) - (times->start_time)));
		int tmp = GameOver();//绘制游戏结束界面，并返回所选项
		switch (tmp)
		{
		case 1:
			return 1;//重新开始
		case 2:
			return 2;//退出游戏
		default:
			return 2;
		}
		delete times;
	}
}

int Controller::PlayGame3()//第三关游戏二级循环
{
	if (sound)
	{
		PlaySound("kulo传奇 _林慧玲.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	}
	Times *times = new Times();
	times->Start(time(NULL));
	srand((unsigned)time(NULL));//设置随机数种子，如果没有 食物的出现位置将会固定

								/*初始化狗，水滴和食物*/
	Dog *cdog = new Dog();
	Stone *cstone = new Stone();
	Water *cwater = new Water();
	Food *cfood = new Food();
	SetColor(6);
	cdog->InitDog();
	cstone->InitStone();
	cfood->DrawFood(*cdog, *cstone, *cwater);
	times->PutMinS(1, 0);
	
	/*游戏循环*/
	while (cdog->OverEdge()) //判断是否撞墙，即是否还有生命
	{
		if (score <= 0)
		{
			/*狗死亡*/
			delete cdog;//释放分配的内存空间
			delete cstone;
			delete cwater;
			delete cfood;
			times->Over(time(NULL));
			times->PrintProcess(time1 + time2 + ((times->over_time) - (times->start_time)));
			int tmp = GameOver();//绘制游戏结束界面，并返回所选项
			switch (tmp)
			{
			case 1:
				return 1;//重新开始
			case 2:
				return 2;//退出游戏
			default:
				return 2;
			}
			delete times;
		}
		
		cdog->NormalMove();
		cstone->StoneMove(*cdog, *cwater);
		times->CountDown();
		if (((cstone->cnt) >= 6) && (cwater->GetProgressBar()) == 0)
		{
			cwater->DrawWater(*cdog, *cstone);//若掉落大于5块石块且水滴进度条为0，则出现一滴水滴
		}
		
		/*调出选择菜单*/
		if (!cdog->NormalMove()) //按Esc键时
		{
			int tmp = Menu();//绘制菜单，并得到返回值
			switch (tmp)
			{
			case 1://继续游戏
				break;

			case 2://重新开始
				delete cdog;
				delete cstone;
				delete cwater;
				delete cfood;
				delete times;
				return 1;//将1作为PlayGame函数的返回值返回到Game函数中，表示重新开始

			case 3://退出游戏
				delete cdog;
				delete cstone;
				delete cwater;
				delete cfood;
				delete times;
				return 2;//将2作为PlayGame函数的返回值返回到Game函数中，表示退出游戏

			default:
				break;
			}
		}

		if (cdog->GetStone(*cstone)) //砸到石头
		{
			UpdateScore(-1);//更新分数，扣一分，1为分数权重
			RewriteScore();//重新绘制分数
			
		}
		else
		{
			cdog->NormalMove();//狗正常移动
		}

		if (cdog->GetWater(*cwater)) //喝到水
		{
			SetCursorPosition(cdog->dog.X, cdog->dog.Y);
			SetColor(14);
			cout << "狗";
			cdog->NormalMove();
			cwater->DrawWater(*cdog, *cstone);
			UpdateScore(3);//分数根据限时水滴进度条确定
			RewriteScore();
		}

		if (cwater->GetWaterFlag()) //如果此时有限时水滴，闪烁它
		{
			cwater->FlashWater();
		}
		if (cdog->GetFood(*cfood)) //吃到食物
		{
			SetCursorPosition(cdog->dog.X, cdog->dog.Y);
			SetColor(14);
			cout << "狗";
			cdog->NormalMove();
			UpdateScore(2);
			RewriteScore();
			cfood->DrawFood(*cdog, *cstone, *cwater);
		}
	}

	if ((times->CountDown()) && cdog->dog.X == 30 && cdog->dog.Y == 15)
	{
		times->Over(time(NULL));
		key = 4;
		time3 = ((times->over_time) - (times->start_time));
		while (true)//游戏可视为一个死循环，直到退出游戏时循环结束
		{
			DrawGame();//绘制游戏界面
			int tmp = PlayGame4();;//开启游戏循环，当重新开始或退出游戏时，结束循环并返回值给tmp
			if (tmp == 1) //返回值为1时重新开始游戏
			{
				system("cls");
				continue;
			}
			else if (tmp == 2) //返回值为2时退出游戏
			{
				break;
			}
			else
			{
				break;
			}
		}
	}
	else
	{/*狗死亡*/
		delete cdog;//释放分配的内存空间
		delete cstone;
		delete cwater;
		delete cfood;
		times->Over(time(NULL));
		times->PrintProcess(time1 + time2+((times->over_time) - (times->start_time)));
		int tmp = GameOver();//绘制游戏结束界面，并返回所选项
		switch (tmp)
		{
		case 1:
			return 1;//重新开始
		case 2:
			return 2;//退出游戏
		default:
			return 2;
		}
		delete times;
	}
}

int Controller::PlayGame4()//第四关游戏二级循环
{
	if (sound)
	{
		PlaySound("诞生 _林慧玲.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	}
	Times *times = new Times();
	times->Start(time(NULL));
	srand((unsigned)time(NULL));//设置随机数种子，如果没有 食物的出现位置将会固定

								/*初始化狗和食物*/
	Dog *cdog = new Dog();
	Stone *cstone = new Stone();
	Water *cwater = new Water();
	Food *cfood = new Food();
	Grass *cgrass = new Grass();
	SetColor(6);
	cdog->InitDog();
	cstone->InitStone();
	cfood->DrawFood(*cdog, *cstone, *cwater);
	times->PutMinS(1, 0);

	/*游戏循环*/
	while (cdog->OverEdge()) //判断是否撞墙，即是否还有生命
	{
		if (score <= 0)
		{
			/*狗死亡*/
			delete cdog;//释放分配的内存空间
			delete cstone;
			delete cwater;
			delete cfood;
			delete cgrass;
			times->Over(time(NULL));
			times->PrintProcess(time1 + time2 + time3 + ((times->over_time) - (times->start_time)));
			int tmp = GameOver();//绘制游戏结束界面，并返回所选项
			switch (tmp)
			{
			case 1:
				return 1;//重新开始
			case 2:
				return 2;//退出游戏
			default:
				return 2;
			}
			delete times;
		}
		
		cdog->NormalMove();
		cstone->StoneMove(*cdog, *cwater);
		times->CountDown();
		if (((cstone->cnt) >= 6) && (cwater->GetProgressBar()) == 0)
		{
			cwater->DrawWater(*cdog, *cstone);//若掉落大于5块石块且水滴进度条为0，则出现一滴水滴
		}
		if (cwater->cnt>0 && cwater->cnt % 5 == 0)
		{
			cgrass->NoneGrass();
			cgrass->DrawGrass(*cdog, *cstone, *cwater, *cfood);
		}
		/*调出选择菜单*/
		if (!cdog->NormalMove()) //按Esc键时
		{
			int tmp = Menu();//绘制菜单，并得到返回值
			switch (tmp)
			{
			case 1://继续游戏
				break;

			case 2://重新开始
				delete cdog;
				delete cstone;
				delete cwater;
				delete cfood;
				delete cgrass;
				delete times;
				return 1;//将1作为PlayGame函数的返回值返回到Game函数中，表示重新开始

			case 3://退出游戏
				delete cdog;
				delete cstone;
				delete cwater;
				delete cfood;
				delete cgrass;
				delete times;
				return 2;//将2作为PlayGame函数的返回值返回到Game函数中，表示退出游戏

			default:
				break;
			}
		}

		if (cdog->GetStone(*cstone)) //砸到石头
		{
			UpdateScore(-1);//更新分数，扣一分，1为分数权重
			RewriteScore();//重新绘制分数
			
		}
		else
		{
			cdog->NormalMove();//狗正常移动
		}

		if (cdog->GetWater(*cwater)) //喝到水
		{
			SetCursorPosition(cdog->dog.X, cdog->dog.Y);
			SetColor(14);
			cout << "狗";
			cdog->NormalMove();
			cwater->DrawWater(*cdog, *cstone);
			UpdateScore(3);//分数根据限时水滴进度条确定
			RewriteScore();
		}

		if (cwater->GetWaterFlag()) //如果此时有限时水滴，闪烁它
		{
			cwater->FlashWater();
		}
		if (cdog->GetFood(*cfood)) //吃到食物
		{
			SetCursorPosition(cdog->dog.X, cdog->dog.Y);
			SetColor(14);
			cout << "狗";
			cdog->NormalMove();
			UpdateScore(2);
			RewriteScore();
			cfood->DrawFood(*cdog, *cstone, *cwater);
		}
		if (cdog->GetGrass(*cgrass,*times)) //遇到草丛
		{
			SetCursorPosition(cdog->dog.X, cdog->dog.Y);
			SetColor(14);
			cout << "狗";
			Sleep(2000);
			times->second += 2;
			UpdateScore(5);
			RewriteScore();
			cgrass->DrawGrass(*cdog, *cstone, *cwater,*cfood);
			cdog->NormalMove();
		}
	}

	if ((times->CountDown()) && cdog->dog.X == 30 && cdog->dog.Y == 15)
	{
		times->Over(time(NULL));
		key = 5;
		time4 = ((times->over_time) - (times->start_time));
		while (true)//游戏可视为一个死循环，直到退出游戏时循环结束
		{
			DrawGame();//绘制游戏界面
			int tmp = PlayGame5();//开启游戏循环，当重新开始或退出游戏时，结束循环并返回值给tmp
			if (tmp == 1) //返回值为1时重新开始游戏
			{
				system("cls");
				continue;
			}
			else if (tmp == 2) //返回值为2时退出游戏
			{
				break;
			}
			else
			{
				break;
			}
		}
	}
	else
	{/*狗死亡*/
		delete cdog;//释放分配的内存空间
		delete cstone;
		delete cwater;
		delete cfood;
		delete cgrass;
		times->Over(time(NULL));
		times->PrintProcess(time1 + time2 + time3 + ((times->over_time) - (times->start_time)));
		int tmp = GameOver();//绘制游戏结束界面，并返回所选项
		switch (tmp)
		{
		case 1:
			return 1;//重新开始
		case 2:
			return 2;//退出游戏
		default:
			return 2;
		}
		delete times;
	}
}

int Controller::PlayGame5()//第五关游戏二级循环
{
	if (sound)
	{
		PlaySound("追风少年 _林慧玲.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	}
	Times *times = new Times();
	times->Start(time(NULL));
	srand((unsigned)time(NULL));//设置随机数种子，如果没有 食物的出现位置将会固定

								/*初始化狗和食物*/
	Dog *cdog = new Dog();
	Stone *cstone = new Stone();
	Water *cwater = new Water();
	Food *cfood = new Food();
	Grass *cgrass = new Grass();
	Cat *ccat = new Cat();
	SetColor(6);
	cdog->InitDog();
	cstone->InitStone();
	cfood->DrawFood(*cdog, *cstone, *cwater);
	times->PutMinS(1, 0);
	
	/*游戏循环*/
	while (cdog->OverEdge()) //判断是否撞墙，即是否还有生命
	{
		if (score <= 0)
		{
			/*狗死亡*/
			delete cdog;//释放分配的内存空间
			delete cstone;
			delete cwater;
			delete cfood;
			delete cgrass;
			delete ccat;
			times->Over(time(NULL));
			time5 = ((times->over_time) - (times->start_time));
			times->PrintProcess(time1 + time2 + time3 + time4 + time5);
			int tmp = GameOver();//绘制游戏结束界面，并返回所选项
			switch (tmp)
			{
			case 1:
				return 1;//重新开始
			case 2:
				return 2;//退出游戏
			default:
				return 2;
			}
			delete times;
		}
		
		cdog->NormalMove();
		cstone->StoneMove(*cdog, *cwater);
		times->OverDown();
		if (((cstone->cnt) >= 6) && (cwater->GetProgressBar()) == 0)
		{
			cwater->DrawWater(*cdog, *cstone);//若掉落大于5块石块且水滴进度条为0，则出现一滴水滴
		}
		if (cwater->cnt>0 && cwater->cnt % 5 == 0)
		{
			cgrass->NoneGrass();
			cgrass->DrawGrass(*cdog, *cstone, *cwater, *cfood);
			ccat->NoneCat();
			ccat->DrawCat(*cdog, *cstone, *cwater, *cfood, *cgrass);
		}
		
		/*调出选择菜单*/
		if (!cdog->NormalMove()) //按Esc键时
		{
			int tmp = Menu();//绘制菜单，并得到返回值
			switch (tmp)
			{
			case 1://继续游戏
				break;

			case 2://重新开始
				delete cdog;
				delete cstone;
				delete cwater;
				delete cfood;
				delete cgrass;
				delete ccat;
				delete times;
				return 1;//将1作为PlayGame函数的返回值返回到Game函数中，表示重新开始

			case 3://退出游戏
				delete cdog;
				delete cstone;
				delete cwater;
				delete cfood;
				delete cgrass;
				delete ccat;
				delete times;
				return 2;//将2作为PlayGame函数的返回值返回到Game函数中，表示退出游戏

			default:
				break;
			}
		}

		if (cdog->GetStone(*cstone)) //砸到石头
		{
			UpdateScore(-1);//更新分数，扣一分，1为分数权重
			RewriteScore();//重新绘制分数
			
		}
		else
		{
			cdog->NormalMove();//狗正常移动
		}

		if (cdog->GetWater(*cwater)) //喝到水
		{
			SetCursorPosition(cdog->dog.X, cdog->dog.Y);
			SetColor(14);
			cout << "狗";
			cdog->NormalMove();
			cwater->DrawWater(*cdog, *cstone);
			UpdateScore(2);//分数根据限时水滴进度条确定
			RewriteScore();
		}

		if (cwater->GetWaterFlag()) //如果此时有限时水滴，闪烁它
		{
			cwater->FlashWater();
		}
		if (cdog->GetFood(*cfood)) //吃到食物
		{
			SetCursorPosition(cdog->dog.X, cdog->dog.Y);
			SetColor(14);
			cout << "狗";
			cdog->NormalMove();
			UpdateScore(3);
			RewriteScore();
			cfood->DrawFood(*cdog, *cstone, *cwater);
		}
		if (cdog->GetGrass(*cgrass,*times)) //遇到草丛
		{
			SetCursorPosition(cdog->dog.X, cdog->dog.Y);
			SetColor(14);
			cout << "狗";
			Sleep(2000);
			times->second += 2;
			UpdateScore(5);
			RewriteScore();
			cgrass->DrawGrass(*cdog, *cstone, *cwater, *cfood);
			cdog->NormalMove();
		}
		if (cdog->GetCat(*ccat)) //遇到猫
		{
			SetCursorPosition(cdog->dog.X, cdog->dog.Y);
			SetColor(14);
			cout << "狗";
			UpdateScore(-3);
			RewriteScore();
			Sleep(3000);
			times->second += 3;
			ccat->DrawCat(*cdog, *cstone, *cwater, *cfood,*cgrass);
			cdog->NormalMove();
		}
	}

	if ((times->OverDown()) && cdog->dog.X == 30 && cdog->dog.Y == 15)
	{
		times->Over(time(NULL));
		time5 = ((times->over_time) - (times->start_time));
		delete cdog;//释放分配的内存空间
		delete cstone;
		delete cwater;
		delete cfood;
		delete cgrass;
		delete ccat;
		times->PrintProcess(time1 + time2 + time3 + time4 + time5);
		int tmp = GameOver();//绘制游戏结束界面，并返回所选项
		switch (tmp)
		{
		case 1:
			return 1;//重新开始
		case 2:
			return 2;//退出游戏
		default:
			return 2;
		}
		delete times;
	}
	else
	{/*狗死亡*/
		delete cdog;//释放分配的内存空间
		delete cstone;
		delete cwater;
		delete cfood;
		delete cgrass;
		delete ccat;
		times->Over(time(NULL));
		times->PrintProcess(time1 + time2 + time3 + time4 + ((times->over_time) - (times->start_time)));
		int tmp = GameOver();//绘制游戏结束界面，并返回所选项
		switch (tmp)
		{
		case 1:
			return 1;//重新开始
		case 2:
			return 2;//退出游戏
		default:
			return 2;
		}
		delete times;
	}
}

void Controller::UpdateScore(const int& tmp)//更新分数
{
	score += tmp;
}

void Controller::RewriteScore()//重绘分数
{
	/*为保持分数尾部对齐，将最大分数设置为6位，计算当前分数位数，将剩余位数用空格补全，再输出分数*/
	SetCursorPosition(37, 8);
	SetColor(11);
	int bit = 0;
	int tmp = score;
	while (tmp != 0)
	{
		++bit;
		tmp /= 10;
	}
	for (int i = 0; i < (6 - bit); ++i)
	{
		cout << " ";
	}
	cout << score;
}

int Controller::Menu()//选择菜单
{
	/*绘制游戏规则和菜单*/
	SetColor(11);
	SetCursorPosition(31, 14);
	cout << "      游戏规则：    ";
	Sleep(100);
	SetCursorPosition(31, 15);
	cout << "狗撞墙即死,进门除外";
	Sleep(100);
	SetCursorPosition(31, 16);
	cout << "狗每砸到1石头扣1分,";
	Sleep(100);
	SetCursorPosition(31, 17);
	cout << "初始分数为2分,";
	Sleep(100);
	SetCursorPosition(31, 18);
	cout << "分数扣完时狗死亡";
	Sleep(100);
	SetCursorPosition(31, 19);
	cout << "每喝1滴水加3分";
	Sleep(100);
	SetCursorPosition(31, 20);
	cout << "遇草加时2秒但加5分";
	Sleep(100);
	SetCursorPosition(31, 21);
	cout << "遇猫加时3秒并扣3分";
	Sleep(100);
	SetCursorPosition(31, 22);
	cout << "狗进门可进入下一关";
	SetCursorPosition(34, 24);
	cout << "  菜单：";
	Sleep(100);
	SetCursorPosition(34, 25);
	SetBackColor();
	cout << "继续游戏";
	Sleep(100);
	SetCursorPosition(34, 26);
	SetColor(11);
	cout << "重新开始";
	Sleep(100);
	SetCursorPosition(34, 27);
	cout << "退出游戏";
	SetCursorPosition(0, 31);

	/*选择部分*/
	int ch;
	int tmp_key = 1;
	bool flag = false;
	while ((ch = _getch()))
	{
		switch (ch)
		{
		case 72://UP
			if (tmp_key > 1)
			{
				switch (tmp_key)
				{
				case 2:
					SetCursorPosition(34, 25);
					SetBackColor();
					cout << "继续游戏";
					SetCursorPosition(34, 26);
					SetColor(11);
					cout << "重新开始";

					--tmp_key;
					break;
				case 3:
					SetCursorPosition(34, 26);
					SetBackColor();
					cout << "重新开始";
					SetCursorPosition(34, 27);
					SetColor(11);
					cout << "退出游戏";

					--tmp_key;
					break;
				}
			}
			break;

		case 80://DOWN
			if (tmp_key < 3)
			{
				switch (tmp_key)
				{
				case 1:
					SetCursorPosition(34, 26);
					SetBackColor();
					cout << "重新开始";
					SetCursorPosition(34, 25);
					SetColor(11);
					cout << "继续游戏";

					++tmp_key;
					break;
				case 2:
					SetCursorPosition(34, 27);
					SetBackColor();
					cout << "退出游戏";
					SetCursorPosition(34, 26);
					SetColor(11);
					cout << "重新开始";

					++tmp_key;
					break;
				}
			}
			break;

		case 13://Enter
			flag = true;
			break;

		default:
			break;
		}

		if (flag)
		{
			break;
		}
		SetCursorPosition(0, 31);
	}

	if (tmp_key == 1) //选择继续游戏，则将菜单擦除
	{
		SetCursorPosition(31, 14);
		cout << "                   ";
		SetCursorPosition(31, 15);
		cout << "                   ";
		SetCursorPosition(31, 16);
		cout << "                   ";
		SetCursorPosition(31, 17);
		cout << "                   ";
		SetCursorPosition(31, 18);
		cout << "                   ";
		SetCursorPosition(31, 19);
		cout << "                   ";
		SetCursorPosition(31, 20);
		cout << "                   ";
		SetCursorPosition(31, 21);
		cout << "                   ";
		SetCursorPosition(31, 22);
		cout << "                   ";
		SetCursorPosition(31, 23);
		cout << "                   ";
		SetCursorPosition(31, 24);
		cout << "                   ";
		SetCursorPosition(31, 25);
		cout << "                   ";
		SetCursorPosition(31, 26);
		cout << "                   ";
		SetCursorPosition(31, 27);
		cout << "                   ";
		SetCursorPosition(0, 31);
	}
	return tmp_key;
}

void Controller::Game()//游戏一级循环
{
	Start();//开始界面
	while (true)//游戏可视为一个死循环，直到退出游戏时循环结束
	{
		Select();//选择界面

		DrawGame();//绘制游戏界面
		int tmp = SelectGames();//开启游戏循环，当重新开始或退出游戏时，结束循环并返回值给tmp
		if (tmp == 1) //返回值为1时重新开始游戏
		{
			system("cls");
			continue;
		}
		else if (tmp == 2) //返回值为2时退出游戏
		{
			break;
		}
		else
		{
			break;
		}
	}
}

int Controller::GameOver()//游戏结束界面
{
	if (sound)
	{
		PlaySound("汪汪快乐颂 _林慧玲.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	}
	/*绘制游戏结束界面*/
	Sleep(500);
	SetColor(11);
	SetCursorPosition(10, 8);
	cout << "━━━━━━━━━━━━━━━━━━━━━━";
	Sleep(30);
	SetCursorPosition(9, 9);
	cout << " ┃               Game Over !!!              ┃";
	Sleep(30);
	SetCursorPosition(9, 10);
	cout << " ┃                                          ┃";
	Sleep(30);
	SetCursorPosition(9, 11);
	cout << " ┃         ";
	Sleep(30);
	SetCursorPosition(26, 11);
	cout << "           ┃         ";
	Sleep(30);
	SetCursorPosition(9, 12);
	cout << " ┃                                          ┃";
	Sleep(30);
	SetCursorPosition(9, 13);
	cout << " ┃             你的分数为：                 ┃";
	SetCursorPosition(24, 13);
	cout << score;
	Sleep(30);
	SetCursorPosition(9, 14);
	cout << " ┃                                          ┃";
	Sleep(30);
	SetCursorPosition(9, 15);
	cout << " ┃               是否再来一次？             ┃";
	Sleep(30);
	SetCursorPosition(9, 16);
	cout << " ┃                                          ┃";
	Sleep(30);
	SetCursorPosition(9, 17);
	cout << " ┃                                          ┃";
	Sleep(30);
	SetCursorPosition(9, 18);
	cout << " ┃    嗯，好的        不了，还是学习有意思  ┃";
	Sleep(30);
	SetCursorPosition(9, 19);
	cout << " ┃                                          ┃";
	Sleep(30);
	SetCursorPosition(9, 20);
	cout << " ┃                                          ┃";
	Sleep(30);
	SetCursorPosition(10, 21);
	cout << "━━━━━━━━━━━━━━━━━━━━━━";

	Sleep(100);
	SetCursorPosition(12, 18);
	SetBackColor();
	cout << "好呀好呀";
	SetCursorPosition(0, 31);

	/*选择部分*/
	int ch;
	int tmp_key = 1;
	bool flag = false;
	while ((ch = _getch()))
	{
		switch (ch)
		{
		case 75://LEFT
			if (tmp_key > 1)
			{
				SetCursorPosition(12, 18);
				SetBackColor();
				cout << "好呀好呀";
				SetCursorPosition(20, 18);
				SetColor(11);
				cout << "不了，还是学习有意思";
				--tmp_key;
			}
			break;

		case 77://RIGHT
			if (tmp_key < 2)
			{
				SetCursorPosition(20, 18);
				SetBackColor();
				cout << "不了，还是学习有意思";
				SetCursorPosition(12, 18);
				SetColor(11);
				cout << "好呀好呀";
				++tmp_key;
			}
			break;

		case 13://Enter
			flag = true;
			break;

		default:
			break;
		}

		SetCursorPosition(0, 31);
		if (flag) 
		{
			break;
		}
	}

	SetColor(11);
	switch (tmp_key)
	{
	case 1:
		return 1;//重新开始
	case 2:
		return 2;//退出游戏
	default:
		return 1;
	}
}

void Controller::GamesInterface(int i)
{
	system ("cls");
	Sleep(500);
	SetColor(11);
	SetCursorPosition(10, 8);
	cout << "━━━━━━━━━━━━━━━━━━━━━━";
	Sleep(30);
	SetCursorPosition(9, 9);
	cout << " ┃                                          ┃";
	Sleep(30);
	SetCursorPosition(9, 10);
	cout << " ┃ ";
	switch (i)
	{
	case 1:
		Sleep(30);
		SetCursorPosition(19, 10);
		cout << "第一关";
		SetCursorPosition(31, 10);
		cout << " ┃ ";
		Sleep(30);
		SetCursorPosition(9, 11);
		cout << " ┃                                          ┃";
		Sleep(30);
		SetCursorPosition(9, 12);
		cout << " ┃ ";
		Sleep(30);
		SetCursorPosition(20, 12);
		cout << "落石";
		SetCursorPosition(31, 12);
		cout << " ┃ ";
		break;
	case 2:
		Sleep(30);
		SetCursorPosition(19, 10);
		cout << "第二关";
		SetCursorPosition(31, 10);
		cout << " ┃ ";
		Sleep(30);
		SetCursorPosition(9, 11);
		cout << " ┃                                          ┃";
		Sleep(30);
		SetCursorPosition(9, 12);
		cout << " ┃ ";
		Sleep(30);
		SetCursorPosition(20, 12);
		cout << "现食";
		SetCursorPosition(31, 12);
		cout << " ┃ ";
		break;
	case 3:
		Sleep(30);
		SetCursorPosition(19, 10);
		cout << "第三关";
		SetCursorPosition(31, 10);
		cout << " ┃ ";
		Sleep(30);
		SetCursorPosition(9, 11);
		cout << " ┃                                          ┃";
		Sleep(30);
		SetCursorPosition(9, 12);
		cout << " ┃ ";
		Sleep(30);
		SetCursorPosition(20, 12);
		cout << "出水";
		SetCursorPosition(31, 12);
		cout << " ┃ ";
		break;
	case 4:
		Sleep(30);
		SetCursorPosition(19, 10);
		cout << "第四关";
		SetCursorPosition(31, 10);
		cout << " ┃ ";
		Sleep(30);
		SetCursorPosition(9, 11);
		cout << " ┃                                          ┃";
		Sleep(30);
		SetCursorPosition(9, 12);
		cout << " ┃ ";
		Sleep(30);
		SetCursorPosition(20, 12);
		cout << "如厕";
		SetCursorPosition(31, 12);
		cout << " ┃ ";
		break;
	case 5:
		Sleep(30);
		SetCursorPosition(19, 10);
		cout << "第五关";
		SetCursorPosition(31, 10);
		cout << " ┃ ";
		Sleep(30);
		SetCursorPosition(9, 11);
		cout << " ┃                                          ┃";
		Sleep(30);
		SetCursorPosition(9, 12);
		cout << " ┃ ";
		Sleep(30);
		SetCursorPosition(20, 12);
		cout << "遇猫";
		SetCursorPosition(31, 12);
		cout << " ┃ ";
		break;
	default:
		break;
	}
	Sleep(30);
	SetCursorPosition(9, 13);
	cout << " ┃                                          ┃";
	Sleep(30);
	SetCursorPosition(9, 14);
	cout << " ┃                                          ┃";
	Sleep(30);
	SetCursorPosition(10, 15);
	cout << "━━━━━━━━━━━━━━━━━━━━━━";
	Sleep(2000);
}