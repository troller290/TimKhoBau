#pragma once
#include "Obstacles.h"
class QuaiVat : public Obstacles
{
public:
	QuaiVat(int s);
	void Nhap();
	bool isCleared(Player);
};

