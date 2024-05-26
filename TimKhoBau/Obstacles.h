#pragma once
#include "iostream"
#include "Player.h"
using namespace std;
class Obstacles
{
protected:
	int* stages;
	int n;
public:
	Obstacles();
	Obstacles(int s);
	~Obstacles();
	virtual void Nhap() = 0;
	virtual bool isCleared(Player) = 0;
};

