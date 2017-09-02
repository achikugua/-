#ifndef WATER_H
#define WATER_H

#include "stone.h"
#include "dog.h"
class Stone;
class Dog;
class Water
{
public:
	Water() : flash_flag(false), water_flag(false), water_x(0), water_y(0), progress_bar(0) {}
	void DrawWater(Dog&,Stone&);
	void FlashWater();
	bool GetWaterFlag();
	int GetProgressBar();
	int Getwater_x();
	int Getwater_y();
	int cnt = 0;
private:
	bool flash_flag;//闪烁标记
	bool water_flag;//是否有限时水滴标记
	int water_x, water_y;
	int progress_bar;//限时水滴进度条
	friend class Dog;
	friend class Stone;
};
#endif // WATER_H

