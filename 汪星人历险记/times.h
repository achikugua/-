#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;


class Times
{
public:
	void PutMinS(double, double);
	bool CountDown();
	bool OverDown();
	void Start(time_t);
	void Over(time_t);
	void PrintProcess(time_t);
	double second;
	time_t start_time;
	time_t over_time;
private:
	int cnt = 0;
	double minute;
};

#endif // TIME_H
