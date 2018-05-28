#include <math.h>
#include<stdio.h>
#include "HeadP.h"

//Функция вычисляет сумму n слагаемых
double series_numbers(int n) 
{
	double  a1, total=0;

	for (int i = 0; i <n; i++) 
	{
		a1 = (pow(i,3) + 1);
		total += (pow(-1,i))*((i + 1) / a1);
	}

	return total;
}

//Функция вычисляет сумму n слагаемых до определенной точности eps
double series_numbers_eps(double eps)
{
	double total=100, a1;

	for (int i = 2;abs(total) >= eps; i++)
	{
		if (i == 2) total = 0;
		a1 = (pow(i, 3) + 1);
		total += (pow(-1, i))*((i + 1) / a1);
	}
	return total;
}

//Функцию, которая печатает 𝑛 членов последовательности,исключая из неё каждый 𝑘-ый член
void series_numbers_cont(int n, int k)
{
	double a, a1;
	int l = k;

	for (int i = 0; i < n; i++)
	{
		if (i == (k - 1))
		{
			k += l;
			continue;
		}	
		a1 = (pow(i, 3) + 1);
		a = (pow(-1, i))*((i + 1) / a1);

		printf("%f\n", a);
	}
}

/*Функцию, которая возвращает номер первого члена последовательности 
для которого выполняется условие abs(a) <= eps*/
int series_numbers_firsElement(double eps)
{
	double a=100, a1=0;
	int i=0;

	for (i; abs(a) >= eps; i++)
	{	
		if (i == 0) a = 0;
		a1 = (pow(i, 3) + 1);
		a = (pow(-1, i))*((i + 1) / a1);
	}
	return i;
}


//Функцию, которая возвращает номер первого отрицательного члена последовательности
int series_numbers_firsMElement(double eps)
{
	double a = 0, a1=0;
	int i = 0;

	for (i; 1; i++)
	{
		a1 = (pow(i, 3) + 1);
		a = (pow(-1, i))*((i + 1) / a1);
		if ((a < 0) && (abs(a) < eps))
			return i;	
	}
	return 0;
}


//Ввод символа
char input_c()
{
	char s = "";
	scanf_s("%c", &s);
	return s;
}

//Ввод числа с плавающей точкой
float input_f()
{
	float s;
	scanf_s("%f", &s);
	return s;
}

//Ввод числа int
int input_i()
{
	int s;
	scanf_s("%d", &s);
	return s;
}