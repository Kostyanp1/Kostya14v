#include<stdio.h>
#include"headP.h"
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_CTYPE, "rus");

	//���������� ����������
	float x = 0, y = 0, f = 0;
	_Bool t = 1;

	//����� �������
	printf("�������� �������: 1 ��� 2\n");
	switch (input_c())
	{
	case '1':
		printf("���������� �������-1\n");

		//���� ������ � ����������
			printf("������� x ������������ �� 0:");
			x = input_f();
			printf("������� y ������������ �� 0:");
			y = input_f();

		//�������� �� ���������� ����� � �������� �������
		if (select(x, y) == t)
			printf("����� ���������� � �������� �������\n");
		else
			printf("����� �� ���������� � �������� �������\n");
		break;

	case '2':
		printf("���������� �������-2\n");

		printf("������� x:");
		x = input_f();

		//���������� ������ �� ���������� �� ��������� x
		f = expression(x);

		if (x >= 2)
		printf("��������� - 1\n %f\n", f);
		else
			printf("��������� - 2\n %f\n", f);
		break;

	default:
		printf("�� ������ ����\n");
		break;
	}

	system("pause");
	return 0;
	
}