#include "Deq.h"
#include<iostream>
using namespace std;

Deq::~Deq()
{
	while (size != 0)
	{
		Node *temp = head->next;
		delete head;
		head = temp;
		size--;
	}
}

int Deq::count()
{
	return size;
}

//Функция ввода списка
void Deq::input(int x)
{
	size++;
	Node *temp = new Node;
	temp->next = head;
	temp->x = x;

	if (head != NULL)
	{
		tail->next = temp;
		tail = temp;
	}
	else
	{
		head = tail = temp;
	}
}

//Функция вывода списка на экран
void Deq::display(int temp)
{
	Node *tempHead = head;
	temp = size;
	while (temp != 0)
	{
		cout << tempHead->x << " ";
		tempHead = tempHead->next;
		temp--;
	}
	cout << "\n";
}

//Функция удаления элемента
void Deq::del(int x)
{
	Node *temp1 = new Node, *temp2;

	temp1 = temp2 = head;

	for (int i = 0; i < x - 1; i++)
	{
		temp1 = temp1->next;
	}

	temp2 = temp1;
	temp2->next = temp1;
	delete temp1;
	size--;
}


void Deq::verify(bool *f)
{
	if (size == 0)
	{
		cout << "Нет элементов в списке!\n";
		*f = false;
		return;
	}
	*f=true;
	return;
}


