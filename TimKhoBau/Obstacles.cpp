#include "Obstacles.h"

Obstacles::Obstacles() : n(0), stages(nullptr)
{}

Obstacles::Obstacles(int s) : n(s)
{
	stages = new int[n];
}

Obstacles::~Obstacles()
{}