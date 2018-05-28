#include<stdio.h>
#include"HeadP.h"
#include <conio.h>

//Увеличение числа на единицу
void increment(int *i) 
{
	if (i != NULL)
	{
		printf("Адрес равняется: %p\nЗначение переменной равняется: %d\n", &i, *i);
		(*i)++;
		printf("Адрес равняется: %p\nЗначение переменной равняется: %d\n", &i, *i);
	}
	else
	{
	printf("Пустой указатель");	
	}
}

//Функция создаёт на стеке целое число, осуществляет ввод, выводит на экран адрес переменной и её значение
void tackVariable()
{
	int i;
 	printf("Введите целое число:");
	i = input_i();
	printf("Адрес равняется: %p\nЗначение переменной равняется: %d\n", &i, i);

	increment(&i);
}

/*Функция, которая создаёт в динамической памяти целое число, осуществляет ввод, 
выводит на экран адрес переменной и её значение*/
void HeapVariable()
{
	int p = 0;
	int *i = (int *)malloc(sizeof(int));

	printf("Введите целое число:");
	i = input_i();

    printf("Адрес равняется: %p\nЗначение переменной равняется: %d\n", &i, i);
	increment(&i);

}

//Функция вывода массива целых чисел на экран
void writeArray(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("A[%d]=%d\n", i, A[i]);
	}
}

//Функция ввода массива целых чисел с клавиатуры
void readArray(int *A, int n) 
{
	for (int i = 0; i < n; i++)
	{
		printf("Введите %d элемент массива: ", i);
		scanf_s("%d", &A[i]);
	}
}

//Функция сортировки массива с использованием алгоритма сортировки: Сортировка вставками 
void sort(int *A, int n) 
{
	int temp, j;
	for (int i = 1; i < n; i++)
	{
		temp = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > temp)
		{
			A[j + 1] = A[j];
			A[j] = temp;
			j--;
		}
	}
}
//Функция, которая создаёт на стеке массив из n элементов
void StackArray() 
{
	int A[5];
	int n = 5;

	printf("Количество элементов массива равняется: %d\n", n);

	readArray(A,n);

	printf("Введенный массив:\n");
	writeArray(A,n);

	printf("Отсортированный массив:\n");
	sort(A, n);
	writeArray(A, n);
}

//Функция, которая создаёт массив в динамической памяти из n элементов
void HeapArray() 
{
	int n = 0;
	printf("Введите количество элементов массива: ");
	n = input_i();
	int *A = (int *)malloc(n * sizeof(int));

	printf("Количество элементов массива равняется: %d\n", n);

	readArray(A, n);

	printf("Введенный массив:\n");
	writeArray(A, n);

	printf("Отсортированный массив:\n");
	sort(A, n);
	writeArray(A, n);

	free(A);
}

int input_i() 
{
	int s;
	scanf_s("%d", &s);
	return s;
}