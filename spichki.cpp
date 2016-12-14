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
			
		case 2: // ИГРА C ЧЕЛОВЕКОМ
			
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