#include "stdafx.h"
#include "Queue.h"
#include<iostream>
using namespace std;

Queue::Queue()
{
	queue = new int [size];
	head = tail = 0;
}

void out(Queue element)
{
	for (int i = element.head + 1; i < element.tail + 1; i++)
	{
		cout << " " << element.queue[i];
	}
}

void Queue::operator+(int num)
{
	if (tail + 1 == head || (tail + 1 == size && !head)) {
		cout << "������� �����\n";
		return;
	}
	tail++;
	if (tail == size) tail = 0;
	queue[tail] = num;
}

Queue::operator int()
{
	int s = 0;
	for (int i = head; i<tail; i++)
	{
		s++;
	}
	return s;
}

void Queue::operator--()
{
	if (head == tail) {
		cout << "������� �����\n";
		return;
	}
	head++;
	if (head == size) head = 0;
}

Queue::operator bool()
{
	bool q;
	if (head == tail)
	{
		cout << "������� ������\n";
		q = 0;
	}
	else
	{
		cout << "������� �� �����\n";
		q = 1;
	}
return q;
}
