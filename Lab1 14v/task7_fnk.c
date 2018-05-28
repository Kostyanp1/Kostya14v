//Подключение заголовочного файла fnk.h
#include"fnk.h"
//Библиотека ввода\вывода
#include<stdio.h>
//Библиотека математических функций
#include <math.h>

//Определение внешних переменных
x = 10;

//Реализация методов
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