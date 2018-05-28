/*//Библиотека ввода\вывода
#include<stdio.h>
//Библиотека математических функций
#include <math.h>
//Библиотека локализации
#include <locale.h>

//Прототипы функций
//Функция
double y(int x);

//Вывод на экран типа double
void display_d(double f);

//Вывод на экран типа int
void display_i(int x);

//Ввод перемнной типа int
int input_i();

int main(int argc, char *argv)
{
setlocale(LC_CTYPE, "rus");
int x=10;
double f;

//Функция при x=10
f=y(x);
display_i(x);
display_d(f);

//Функция: x-вводится
printf("Введите: x=");
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

