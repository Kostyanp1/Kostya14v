#include "HeadP.h"
#include <stdio.h>
#include<locale.h>

main(int argc, char *argv[])
{
	setlocale(LC_CTYPE, "rus");

	//���������� ��������� ����������
	int n = 0, k = 0;
	double eps = 0, total = 0;

	//����� �������
	printf("�������� �������: 1-5\n");
	switch (input_c())
	{
	case '1':
		printf("���������� �������-1\n ������� n: ");
		n = input_i();
		total=series_numbers(n);
		printf("����� n ��������� �����: %f\n",total);
		break;

	case '2':
		printf("���������� �������-2\n ������� eps: ");
		eps = input_f();
		total = series_numbers_eps(eps);
		printf("����� ��������� �� eps �����: %f\n", total);
		break;

	case '3':
		printf("���������� �������-3\n ������� n: ");
		n = input_i();
		printf("������� k: ");
		k = input_i();
		series_numbers_cont(n, k);
		break;

	case '4':
		printf("���������� �������-4\n ������� eps: ");
		eps = input_f();
		n = series_numbers_firsElement(eps);
		printf("����� ������� ����� ������������������ �� eps: %d\n", n);
		break;

	case '5':
		printf("���������� �������-5\n ������� eps: ");
		eps = input_f();
		n=series_numbers_firsMElement(eps);
		printf("����� ������� �������������� ����� ������������������ �� eps: %d\n", n);
		break;

	default:
		printf("�� ������ ����\n");
		break;
	}

	system("pause");
	return 0;
}