#pragma once
#include<stdlib.h>
//Элемент списка
struct Node
{
	int x;
	Node *next;
};


class BaseDeq
{
public:
	BaseDeq() :head(NULL), tail(NULL) {};
	~BaseDeq() {};


	virtual void display(int temp)=0;
	virtual void input(int x)=0;
	virtual void del(int x)=0;
	virtual void verify(bool *f)=0;
	virtual int count()=0;

protected:
	long int size;
    Node *head, *tail;
	
};

