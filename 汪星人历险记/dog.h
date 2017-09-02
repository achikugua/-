#ifndef DOG_H
#define DOG_H

#include "stone.h"
#include "water.h"
#include "food.h"
#include "grass.h"
#include "cat.h"
#include "windows.h"
using namespace std;

class Water;
class Food;
class Grass;
class Cat;
class Stone;
class Times;
class Dog
{
public:
	Dog():x(15),y(28) {}
	COORD dog;
	void InitDog();
	bool NormalMove();
	bool OverEdge();
	bool GetStone(Stone&);
	bool GetWater(Water&);
	bool GetFood(Food&);
	bool GetGrass(Grass&,Times&);
	bool GetCat(Cat&);

private:
	int x, y;
	friend class Stone;//��Stone����Ϊ��Ԫ���Ա������˽��Ԫ��
	friend class Water;
	friend class Food;
	friend class Grass;
	friend class Cat;
};
#endif // DOG_H

