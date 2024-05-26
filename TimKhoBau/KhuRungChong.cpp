#include "KhuRungChong.h"
#include "ctime"
KhuRungChong::KhuRungChong(int s) : Obstacles(s)
{
	srand(time(0));
	int x = rand() % 6;
	quatao = x;
}

void KhuRungChong::Nhap()
{
	cout << "\t=====NHAP THONG TIN RUNG CHONG====\t\n";
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap chieu cao cua cay chong thu " << i + 1 << ": ";
		cin >> stages[i];
	}
}

bool KhuRungChong::isCleared(Player player)
{
	player.getBuff(quatao);
	int beat = 0;
	int isbeated = 0;
	for (int i = 0; i < n; i++)
	{
		if (stages[i] > player.getJump(i))
		{
			beat++;
		}
		else if (stages[i] < player.getJump(i))
		{
			isbeated++;
		}
	}
	if (beat > isbeated) return false;
	return true;
}