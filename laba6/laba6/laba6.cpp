// laba6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
#include"Queue.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	Queue queue1, queue2;
	int i;
	for (i = 1; i <= 5; i++) {
		queue1.operator+(i);
	}
	cout << "����������� ������� ";
	out(queue1);
	cout << endl;
	cout << "������� ��� �������: ";
	int n;
	cin >> n;
	queue1.operator+(n);
	cout << "������ ������� ����� ��������� ���" << endl;
	out(queue1);
	cout << endl;
	cout << "������ �������:" << endl;
	cout << queue1.operator int();
	cout << endl;
	cout << "�������� ��������";
	queue1.operator--();
	cout << endl;
	cout << "������� ������";
	out(queue1);
	cout << endl;
	cout << "��� ���� ���������� ��������";
	queue1.operator+(n);
	out(queue1);
	cout << endl;
	queue1.operator bool();
	queue2.operator bool();
	system("pause");
	return 0;
}

