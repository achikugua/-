#ifndef STRATINTERFACE_H
#define STARTINTERFACE_H

#include <vector>
#include "point.h"
using namespace std;

class StartInterface
{
public:
	StartInterface() : speed(50) 
	{
		wang.emplace_back(Point(17, -8));//汪
		wang.emplace_back(Point(18, -7));
		wang.emplace_back(Point(19, -6));
		wang.emplace_back(Point(17, -5));
		wang.emplace_back(Point(18, -4));
		wang.emplace_back(Point(19, -3));
		wang.emplace_back(Point(17, 0));
		wang.emplace_back(Point(18, -1));
		wang.emplace_back(Point(19, -2));
		wang.emplace_back(Point(21, -7));
		wang.emplace_back(Point(22, -7));
		wang.emplace_back(Point(23, -7));
		wang.emplace_back(Point(24, -7));
		wang.emplace_back(Point(25, -7));
		wang.emplace_back(Point(23, -6));
		wang.emplace_back(Point(23, -5));
		wang.emplace_back(Point(21, -4));
		wang.emplace_back(Point(22, -4));
		wang.emplace_back(Point(23, -4));
		wang.emplace_back(Point(24, -4));
		wang.emplace_back(Point(25, -4));
		wang.emplace_back(Point(23, -3));
		wang.emplace_back(Point(23, -2));
		wang.emplace_back(Point(21, -1));
		wang.emplace_back(Point(22, -1));
		wang.emplace_back(Point(23, -1));
		wang.emplace_back(Point(24, -1));
		wang.emplace_back(Point(25, -1));

		dogAdv.emplace_back(Point(-37, 14));//D
		dogAdv.emplace_back(Point(-37, 15));
		dogAdv.emplace_back(Point(-37, 16));
		dogAdv.emplace_back(Point(-37, 17));
		dogAdv.emplace_back(Point(-37, 18));
		dogAdv.emplace_back(Point(-36, 14));
		dogAdv.emplace_back(Point(-36, 18));
		dogAdv.emplace_back(Point(-35, 15));
		dogAdv.emplace_back(Point(-35, 17));
		dogAdv.emplace_back(Point(-34, 16));

		dogAdv.emplace_back(Point(-32, 15));//O
		dogAdv.emplace_back(Point(-32, 16));
		dogAdv.emplace_back(Point(-32, 17));
		dogAdv.emplace_back(Point(-31, 14));
		dogAdv.emplace_back(Point(-31, 18));
		dogAdv.emplace_back(Point(-30, 15));
		dogAdv.emplace_back(Point(-30, 16));
		dogAdv.emplace_back(Point(-30, 17));

		dogAdv.emplace_back(Point(-28, 15));//G
		dogAdv.emplace_back(Point(-28, 16));
		dogAdv.emplace_back(Point(-28, 17));
		dogAdv.emplace_back(Point(-27, 14));
		dogAdv.emplace_back(Point(-27, 18));
		dogAdv.emplace_back(Point(-26, 14));
		dogAdv.emplace_back(Point(-26, 16));
		dogAdv.emplace_back(Point(-26, 18));
		dogAdv.emplace_back(Point(-25, 14));
		dogAdv.emplace_back(Point(-25, 16));
		dogAdv.emplace_back(Point(-25, 17));
		dogAdv.emplace_back(Point(-25, 18));

		dogAdv.emplace_back(Point(-23, 18));//A
		dogAdv.emplace_back(Point(-22, 17));
		dogAdv.emplace_back(Point(-21, 16));
		dogAdv.emplace_back(Point(-21, 15));
		dogAdv.emplace_back(Point(-20, 14));
		dogAdv.emplace_back(Point(-20, 16));
		dogAdv.emplace_back(Point(-19, 15));
		dogAdv.emplace_back(Point(-19, 16));
		dogAdv.emplace_back(Point(-18, 17));
		dogAdv.emplace_back(Point(-17, 18));

		dogAdv.emplace_back(Point(-15, 14));//D
		dogAdv.emplace_back(Point(-15, 15));
		dogAdv.emplace_back(Point(-15, 16));
		dogAdv.emplace_back(Point(-15, 17));
		dogAdv.emplace_back(Point(-15, 18));
		dogAdv.emplace_back(Point(-14, 14));
		dogAdv.emplace_back(Point(-14, 18));
		dogAdv.emplace_back(Point(-13, 15));
		dogAdv.emplace_back(Point(-13, 17));
		dogAdv.emplace_back(Point(-12, 16));

		dogAdv.emplace_back(Point(-10, 14));//V
		dogAdv.emplace_back(Point(-9, 15));
		dogAdv.emplace_back(Point(-9, 16));
		dogAdv.emplace_back(Point(-8, 17));
		dogAdv.emplace_back(Point(-7, 18));
		dogAdv.emplace_back(Point(-6, 17));
		dogAdv.emplace_back(Point(-5, 16));
		dogAdv.emplace_back(Point(-5, 15));
		dogAdv.emplace_back(Point(-4, 14));

	}
	void PrintAction();
	void PrintWang();
	void PrintDogAdv();
	void ClearWang();
	void ClearDogAdv();

private:
	vector<Point> wang;//开始动画中的汪
	vector<Point> dogAdv;//开始动画中的DogAdv
	int speed;//动画的速度
};
#endif // STRATINTERFACE_H

