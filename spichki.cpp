#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;
const int initialcount = 100;
int amount = 0;//������� ���-�� ������
int num = 0;//���-�� ������, ������� ��������� ����� ��� ���������
int player = 0;//???
int answer = 0;
bool correct = true;//����������� ���������� ����� do while
bool correct1 = true;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	system("cls");//�������, ������ ������
	player = 1;//???
	amount = initialcount;
	cout << "�������� ����� ����: \n 1 - ���� � ����������� \n 2 - ���� � ��������� \n";
	do
	{
		cin >> answer;
		switch (answer)
		{
		case 1: //���� � �����������
			do
			{
				if (player == 1)
				{
					do
					{
						cout << "��� ���. �� ����� " << amount << " ������.\n";
						cout << "������� ������ �� ������?\n";
						cin >> num;
						if (num >= 1 && num <= 10 && num <= amount)
							correct = true;
						else
						{
							cout << "�������! ��������� ����!\n";
							correct = false;
						}
					} while (!correct);

				}
				else
				{
					do
					{
						num = rand() % 10 + 1;
						if (num > amount)
							num = amount;
						cout << "��� ���! � ���� " << num << " ������.\n";
					} while (!correct);
				}
				amount -= num;
				if (player == 1)
					player = 2;
				else
					player = 1;
			} while (amount > 0);
			if (player == 1)
				cout << "�� ��������. ��������� ��������.\n";
			else
				cout << "�� ���������. ������� ���������.\n";
			break;
			
		case 2: // ���� C ���������
			do
			{
				if (player == 1)
				{
					do
					{
						cout << "����� 1, ��� ���. �� ����� " << amount << " ������.\n";
						cout << "������� ������ �� ������?\n";
						cin >> num;
						if (num >= 1 && num <= 10 && num <= amount)
							correct = true;
						else
						{
							cout << "�������! ��������� ����!\n";
							correct = false;
						}
					} while (!correct);

				}
				else
				{
					do
					{
						cout << "����� 2, ��� ���. �� ����� " << amount << " ������.\n";
						cout << "������� ������ �� ������?\n";
						cin >> num;
						if (num >= 1 && num <= 10 && num <= amount)
							correct = true;
						else
						{
							cout << "�������! ��������� ����!\n";
							correct = false;
						}
					} while (!correct);
				}
				amount -= num;
				if (player == 1)
					player = 2;
				else
					player = 1;
			} while (amount > 0);
			if (player == 1)
				cout << "����� 1, �� ��������.\n";
			else
				cout << "����� 2, �� ��������.\n";
			break;
			
		default:
			cout << "������ ������ ���! ����� ��� 1 ��� 2.\n";
			break;
		}
		if (answer >= 1 && answer <= 2)
		{
			correct1 = false;
		}
	} while (correct1);



	return 0;
}