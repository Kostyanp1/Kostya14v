#include<stdio.h>
#include"headP.h"
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_CTYPE, "rus");

	//Объявление переменных
	float x = 0, y = 0, f = 0;
	_Bool t = 1;

	//Выбор задания
	printf("Выберете задание: 1 или 2\n");
	switch (input_c())
	{
	case '1':
		printf("Выполнение Задания-1\n");

		//Ввод данных с клавиатуры
			printf("Введите x отличающийся от 0:");
			x = input_f();
			printf("Введите y отличающийся от 0:");
			y = input_f();

		//Проверка на содержание точки в заданной области
		if (select(x, y) == t)
			printf("Точка содержится в заданной области\n");
		else
			printf("Точка не содержится в заданной области\n");
		break;

	case '2':
		printf("Выполнение Задания-2\n");

		printf("Введите x:");
		x = input_f();

		//Вычисление одного из выраженией по заданному x
		f = expression(x);

		if (x >= 2)
		printf("Выражение - 1\n %f\n", f);
		else
			printf("Выражение - 2\n %f\n", f);
		break;

	default:
		printf("Не верный ввод\n");
		break;
	}

	system("pause");
	return 0;
	
}