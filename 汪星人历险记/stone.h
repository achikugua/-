#ifndef STONE_H
#define STONE_H

#include "dog.h"
#include "controller.h"
#include "water.h"
#include "windows.h"
#include<conio.h>
using namespace std;

class Water;
class Dog;
class Stone
{
public:
	COORD stones[6];
	int random(int, int);
	COORD random(COORD, COORD);
	void StoneMove(Dog&,Water&);
	void InitStone();
	int cnt=0;
private:
	friend class Dog;
	friend class Water;
	friend class controller;
};
#endif // STONE_H

