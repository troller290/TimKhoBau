#include "Game.h"
#include "KhuRungChong.h"
#include "DuongHamNui.h"
#include "QuaiVat.h"
void Game::Nhap()
{
	int n;
	do
	{
		cout << "Nhap so luong chuong ngai vat: "; 
		cin >> n;
	} while (n <= 0 || n >= 50);
	int chon;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap (1.Rung chong, 2.Duong ham, 3.Quai vat): "; 
		cin >> chon;
		if (chon == 1)
		{
			Obstacles* input = new KhuRungChong(7);
			input->Nhap();
			obstacles.push_back(input);
		}
		else if (chon == 2)
		{
			Obstacles* input = new DuongHamNui;
			input->Nhap();
			obstacles.push_back(input);
		}
		else if (chon == 3)
		{
			Obstacles* input = new QuaiVat(5);
			input->Nhap();
			obstacles.push_back(input);
		}
	}

	player.Nhap();
}

void Game::TimKhoBau()
{
	int cnt = 0;
	for (int i = 0; i < obstacles.size(); i++)
	{
		if (obstacles[i]->isCleared(player))
		{
			cnt++;
		}
	}
	if (cnt == obstacles.size())
	{
		cout << "-->Tim duoc kho bau" << endl;
	}
	else
	{
		cout << "-->Ve nha an com" << endl;
	}
}