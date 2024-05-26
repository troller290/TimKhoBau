#pragma once
#include "Obstacles.h"
class DuongHamNui : public Obstacles
{
public:
	DuongHamNui();
	void Nhap();
	bool isCleared(Player);
};

