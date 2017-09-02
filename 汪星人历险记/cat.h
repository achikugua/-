#ifndef CAT_H
#define CAT_H

#include "dog.h"
class Dog;
class Stone;
class Water;
class Food;
class Grass;
class Cat
{
public:

	void DrawCat(Dog&, Stone&, Water&, Food&,Grass&);
	void NoneCat();

private:
	int x, y;
	friend class Dog;
	friend class Stone;
	friend class Water;
	friend class Food;
	friend class Grass;
};
#endif // CAT_H

