#pragma once
class Queue
{
public:
	static const int size = 20;//������������ ������ ������� 
	int *queue;// ��������� �� ������� 
	int head, tail;// ������ �����

	Queue();
	void operator +(int num);// ���������� �������� 
	friend void out(Queue element);//����� ���������� 
	operator int(); // ������ ������� 
	void operator --();// ������� �������
	operator bool();// �������� ������ �� ������� 
};

