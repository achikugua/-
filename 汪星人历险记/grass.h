#ifndef GRASS_H
#define GRASS_H

#include "dog.h"
class Dog;
class Cat;
class Stone;
class Water;
class Food;
class Grass
{
public:

	void DrawGrass(Dog&, Stone&, Water&, Food&);
	void NoneGrass();
private:
	int x, y;
	friend class Dog;
	friend class Cat;
	friend class Stone;
	friend class Water;
	friend class Food;
};
#endif // GRASS_H

