/*//Библиотека ввода\вывода
#include<stdio.h>
//Библиотека математических функций
#include <math.h>
//Библиотека локализации
#include <locale.h>

//Глобальные переменные
int x=10;
double f;

void y()
{
	f = ((cos(x)+sin(x))/(cos(x)-sin(x)));
}
void display_d()
{
	printf("f(x)=%f\n", f);
}
void display_i()
{
	printf("x=%d\n", x);
}
void input_i()
{
	scanf_s("%d", &x);
}

int main(int argc, char *argv)
{
setlocale(LC_CTYPE, "rus");

//Функция при x=10
fnk();
display_i();
display_d();

//Функция: x-вводится
printf("Введите x=");
input_i();
y();
display_i();
display_d();

system("pause");
return 0;
}*/