#include<stdio.h>
#include<iostream>
#include<locale>
#include"Deq.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int i = 0, x, t;
	bool f;
	Deq d;

	while (true)
	{
		cout << "Введите " << i << " элемент списка: \n";
		cout << "Введите '0' для завершени¤ заполнения списка\n";
		cin >> x;
		if (x == 0) break;
		d.input(x);
		i++;
	}

	d.verify(&f);
	if (f == true)
	{
		cout << "DEQUE\n";
		d.display(d.count());

		while (true)
		{
			cout << "Введите элемент, который хотите удалить\n";
			cout << "Введите '0' для выхода\n";
			cin >> x;
			if (x == 0) break;
			d.del(x);
		}

		cout << "DEQUE\n";
		d.display(d.count());
	}

	system("pause");
	return 0;
}