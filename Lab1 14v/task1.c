/*//���������� �����\������
#include<stdio.h>
//���������� �������������� �������
#include <math.h>
//���������� �����������
#include <locale.h>

int main(int argc, char *argv)
{
	setlocale(LC_CTYPE, "rus");
    int x=10;
	float f;

	//������� ��� x=10
	f = ((cos(x)+sin(x))/(cos(x)-sin(x)));
	printf("x=%d\n", x);
	printf("f(x)=%f\n", f);

	//�������: x-��������
	printf("������� x: ");
	scanf_s("%d",&x);
	f = ((cos(x)+sin(x))/(cos(x)-sin(x)));
	printf("x=%d\n", x);
	printf("f(x)=%f\n", f);

	system("pause");
	return 0;
}*/