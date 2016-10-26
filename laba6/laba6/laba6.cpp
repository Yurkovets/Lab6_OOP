// laba6.cpp: определяет точку входа для консольного приложения.
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
	cout << "Изначальная очередь ";
	out(queue1);
	cout << endl;
	cout << "введите еще элемент: ";
	int n;
	cin >> n;
	queue1.operator+(n);
	cout << "теперь очередь имеет следующий вид" << endl;
	out(queue1);
	cout << endl;
	cout << "Размер очереди:" << endl;
	cout << queue1.operator int();
	cout << endl;
	cout << "удаление элемента";
	queue1.operator--();
	cout << endl;
	cout << "текущие данные";
	out(queue1);
	cout << endl;
	cout << "еще одно добавление элемента";
	queue1.operator+(n);
	out(queue1);
	cout << endl;
	queue1.operator bool();
	queue2.operator bool();
	system("pause");
	return 0;
}

