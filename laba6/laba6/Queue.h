#pragma once
class Queue
{
public:
	static const int size = 20;//максимальный размер очереди 
	int *queue;// указатель на очередь 
	int head, tail;// голова хвост

	Queue();
	void operator +(int num);// добавление элемента 
	friend void out(Queue element);//вывод элеементов 
	operator int(); // размер очереди 
	void operator --();// извлечь элемент
	operator bool();// проверка пустая ли очередь 
};

