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
			
		case 2: // ���� C ���������
			
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