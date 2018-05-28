#include<stdio.h>
#include"HeadP.h"
#include <conio.h>

//���������� ����� �� �������
void increment(int *i) 
{
	if (i != NULL)
	{
		printf("����� ���������: %p\n�������� ���������� ���������: %d\n", &i, *i);
		(*i)++;
		printf("����� ���������: %p\n�������� ���������� ���������: %d\n", &i, *i);
	}
	else
	{
	printf("������ ���������");	
	}
}

//������� ������ �� ����� ����� �����, ������������ ����, ������� �� ����� ����� ���������� � � ��������
void tackVariable()
{
	int i;
 	printf("������� ����� �����:");
	i = input_i();
	printf("����� ���������: %p\n�������� ���������� ���������: %d\n", &i, i);

	increment(&i);
}

/*�������, ������� ������ � ������������ ������ ����� �����, ������������ ����, 
������� �� ����� ����� ���������� � � ��������*/
void HeapVariable()
{
	int p = 0;
	int *i = (int *)malloc(sizeof(int));

	printf("������� ����� �����:");
	i = input_i();

    printf("����� ���������: %p\n�������� ���������� ���������: %d\n", &i, i);
	increment(&i);

}

//������� ������ ������� ����� ����� �� �����
void writeArray(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("A[%d]=%d\n", i, A[i]);
	}
}

//������� ����� ������� ����� ����� � ����������
void readArray(int *A, int n) 
{
	for (int i = 0; i < n; i++)
	{
		printf("������� %d ������� �������: ", i);
		scanf_s("%d", &A[i]);
	}
}

//������� ���������� ������� � �������������� ��������� ����������: ���������� ��������� 
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
//�������, ������� ������ �� ����� ������ �� n ���������
void StackArray() 
{
	int A[5];
	int n = 5;

	printf("���������� ��������� ������� ���������: %d\n", n);

	readArray(A,n);

	printf("��������� ������:\n");
	writeArray(A,n);

	printf("��������������� ������:\n");
	sort(A, n);
	writeArray(A, n);
}

//�������, ������� ������ ������ � ������������ ������ �� n ���������
void HeapArray() 
{
	int n = 0;
	printf("������� ���������� ��������� �������: ");
	n = input_i();
	int *A = (int *)malloc(n * sizeof(int));

	printf("���������� ��������� ������� ���������: %d\n", n);

	readArray(A, n);

	printf("��������� ������:\n");
	writeArray(A, n);

	printf("��������������� ������:\n");
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