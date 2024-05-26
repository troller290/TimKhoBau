#include "QuaiVat.h"

QuaiVat::QuaiVat(int s = 5) : Obstacles(s)
{}

void QuaiVat::Nhap()
{
	cout << "\t====NHAP THONG TIN QUAI VAT====\t\n";
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap suc manh cua skill " << i + 1 << ": ";
		cin >> stages[i];
	}
}

bool QuaiVat::isCleared(Player player)
{
	int beat = 0;
	int isbeated = 0;
	for (int i = 0; i < n; i++)
	{
		if (stages[i] > player.getSkill(i))
		{
			beat++;
		}
		else if (stages[i] < player.getSkill(i))
		{
			isbeated++;
		}
	}
	if (beat > isbeated) return false;
	return true;
}