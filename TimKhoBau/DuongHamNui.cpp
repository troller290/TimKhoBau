#include "DuongHamNui.h"

DuongHamNui::DuongHamNui()
{}

void DuongHamNui::Nhap()
{
	cout << "\t====NHAP THONG TIN DUONG HAM====\t\n";
	cout << "\nNhap so luong cot moc: "; cin >> n;
	stages = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap chieu cao cot moc " << i + 1 << ": ";
		cin >> stages[i];
	}
}

bool DuongHamNui::isCleared(Player player)
{
	int beat = 0;
	int isbeated = 0;
	for (int i = 0; i < n; i++)
	{
		if (stages[i] > player.getHeight())
		{
			beat++;
		}
		else if (stages[i] < player.getHeight())
		{
			isbeated++;
		}
	}
	if (beat > isbeated) return false;
	return true;
}