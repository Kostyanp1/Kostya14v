/*//���������� �����\������
#include<stdio.h>
//���������� �������������� �������
#include <math.h>
//���������� �����������
#include <locale.h>

//��������� �������
//�������
double y(int x);

//����� �� ����� ���� double
void display_d(double f);

//����� �� ����� ���� int
void display_i(int x);

//���� ��������� ���� int
int input_i();

int main(int argc, char *argv)
{
setlocale(LC_CTYPE, "rus");
int x=10;
double f;

//������� ��� x=10
f=y(x);
display_i(x);
display_d(f);

//�������: x-��������
printf("�������: x=");
x=input_i();
f=y(x);
display_i(x);
display_d(f);

system("pause");
return 0;
}

double y(int x)
{
	return ((cos(x)+sin(x))/(cos(x)-sin(x)));
}
void display_d(double f)
{
	printf("f(x)=%f\n", f);
}
void display_i(int x)
{
	printf("x=%d\n", x);
}
int input_i()
{
	int x;
	scanf_s("%d", &x);
	return x;
}*/

