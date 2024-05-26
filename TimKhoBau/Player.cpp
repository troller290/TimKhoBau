#include "Player.h"

void Player::Nhap()
{
	cout << "\t=====NHAP THONG TIN NGUOI CHOI=====\t\n";
	cout << "\nNhap chieu cao: ";
	cin >> height;


	for (int i = 0; i < 7; i++)
	{
		int sn;
		cout << "\nNhap suc nhay thu " << i + 1 << ": ";
		cin >> sn;
		jump.push_back(sn);
	}

	for (int i = 0; i < 5; i++)
	{
		int sm;
		cout << "\nNhap suc manh chieu " << i + 1 << ": ";
		cin >> sm;
		skill.push_back(sm);
	}

}

int Player::getHeight()
{
	return height;
}

int Player::getJump(int i)
{
	return jump[i];
}

int Player::getSkill(int i)
{
	return skill[i];
}

void Player::getBuff(int t)
{
	for (int i = 0; i < jump.size(); i++)
	{
		jump[i] += t;
	}
}