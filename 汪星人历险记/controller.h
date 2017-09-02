#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <time.h>

class Controller
{
public:
	Controller() : speed(100), key(1), score(2) {}
	void Start();
	void Select();
	int SelectGames();
	void DrawGame();
	void GamesInterface(int);
	int PlayGame1();
	int PlayGame2();
	int PlayGame3();
	int PlayGame4();
	int PlayGame5();
	void UpdateScore(const int&);
	void RewriteScore();
	int Menu();
	void Game();
	int GameOver();
private:
	bool sound;
	int speed;
	int key;
	int score;
	time_t time1 = 0;
	time_t time2 = 0;
	time_t time3 = 0;
	time_t time4 = 0;
	time_t time5 = 0;
};
#endif // CONTROLLER_H

