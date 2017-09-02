#ifndef FOOD_H
#define FOOD_H

#include "dog.h"
class Dog;
class Food
{
public:

	void DrawFood(Dog&,Stone&,Water&);
	int Getfood_x();
	int Getfood_y();
private:
	int x, y;
	friend class Dog;
};
#endif // FOOD_H

