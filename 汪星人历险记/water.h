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
	bool flash_flag;//��˸���
	bool water_flag;//�Ƿ�����ʱˮ�α��
	int water_x, water_y;
	int progress_bar;//��ʱˮ�ν�����
	friend class Dog;
	friend class Stone;
};
#endif // WATER_H

