#pragma once
#include "Player.h"
#include "Obstacles.h"
#include "vector"
#include "iostream"
using namespace std;
class Game
{
private:
	Player player;
	vector<Obstacles*> obstacles;
public:
	void Nhap();
	void TimKhoBau();
};

