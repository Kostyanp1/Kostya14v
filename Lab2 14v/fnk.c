#include<math.h>
#include<stdio.h>

//Функция проверки(Задание-1)
_Bool select(float x, float y) 
{
	float gp;
	gp = sqrt((x*x) + (y*y));

	if (y > 0 && x>0 && x<=1 && y<=1)
		return 1;
	else if (y < 0 && x>0 && gp <= 1)
		return 1;
	else
		return 0;
}

//Вычисление выражения(Задание-2)
float expression(float x)
{	
	return x >= 2 ? ((1+(x*x))/(sqrt(2*x))) : abs(1-sin(2*x));
}


//Ввод числа с плавающей точкой
float input_f()
{
	float s;
	scanf_s("%f", &s);
	return s;
}

//Ввод символа
char input_c()
{
	char s="";
	scanf_s("%c", &s);
	return s;
}