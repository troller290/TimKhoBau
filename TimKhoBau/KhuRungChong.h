#pragma once
#include "Obstacles.h"
class KhuRungChong : public Obstacles
{
private:
	int quatao;
public:
	KhuRungChong(int s = 0);
	void Nhap();
	bool isCleared(Player);
};

