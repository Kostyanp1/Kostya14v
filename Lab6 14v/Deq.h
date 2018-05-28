#pragma once
#include<stdlib.h>

//Элемент списка
struct Node
{
	int x;
	Node *next;
};

class Deq
{
	
public:
	// Конструктор по умолчанию
	Deq():head(NULL), tail(NULL), size(0){}
	~Deq();

	void display(int temp);
	void input(int x);
	void del(int x);
	bool verify();
	int count();
private:
	long int size;
	Node *head, *tail;
};

