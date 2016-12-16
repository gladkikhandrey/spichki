#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;
const int initialcount = 100;
int amount = 0;//текущее кол-во спичек
int num = 0;//кол-во спичек, которое вытягивае игрок или компьютер
int player = 0;//???
int answer = 0;
bool correct = true;//управляющая переменная цикла do while
bool correct1 = true;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	system("cls");//полагаю, лишняя строка
	player = 1;//???
	amount = initialcount;
	cout << "Выберите режим игры: \n 1 - игра с компьютером \n 2 - игра с человеком \n";
	do
	{
		cin >> answer;
		switch (answer)
		{
		case 1: //ИГРА С КОМПЬЮТЕРОМ
			do
			{
				if (player == 1)
				{
					do
					{
						cout << "Ваш ход. На столе " << amount << " спичек.\n";
						cout << "Сколько спичек Вы берете?\n";
						cin >> num;
						if (num >= 1 && num <= 10 && num <= amount)
							correct = true;
						else
						{
							cout << "Неверно! Повторите ввод!\n";
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
						cout << "Мой ход! Я взял " << num << " спичек.\n";
					} while (!correct);
				}
				amount -= num;
				if (player == 1)
					player = 2;
				else
					player = 1;
			} while (amount > 0);
			if (player == 1)
				cout << "Вы победили. Компьютер проиграл.\n";
			else
				cout << "Вы проиграли. Выиграл компьютер.\n";
			break;
			
		case 2: // ИГРА C ЧЕЛОВЕКОМ
			do
			{
				if (player == 1)
				{
					do
					{
						cout << "Игрок 1, Ваш ход. На столе " << amount << " спичек.\n";
						cout << "Сколько спичек Вы берете?\n";
						cin >> num;
						if (num >= 1 && num <= 10 && num <= amount)
							correct = true;
						else
						{
							cout << "Неверно! Повторите ввод!\n";
							correct = false;
						}
					} while (!correct);

				}
				else
				{
					do
					{
						cout << "Игрок 2, Ваш ход. На столе " << amount << " спичек.\n";
						cout << "Сколько спичек Вы берете?\n";
						cin >> num;
						if (num >= 1 && num <= 10 && num <= amount)
							correct = true;
						else
						{
							cout << "Неверно! Повторите ввод!\n";
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
				cout << "Игрок 1, Вы победили.\n";
			else
				cout << "Игрок 2, Вы победили.\n";
			break;
			
		default:
			cout << "Такого режима нет! Нажми или 1 или 2.\n";
			break;
		}
		if (answer >= 1 && answer <= 2)
		{
			correct1 = false;
		}
	} while (correct1);



	return 0;
}