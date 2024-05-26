#pragma once
#include "iostream"
#include "vector"
using namespace std;
class Player
{
private:
	int height;
	vector<int> jump;
	vector<int> skill;
public:
	void Nhap();
	int getJump(int);
	int getHeight();
	int getSkill(int);
	void getBuff(int);
};

