#include<iostream>
#include"Rational.h"
#include<cstdlib>
using namespace std;

//���������� �������� <<
ostream &operator<<(ostream& stream,Rational const& fraction)
{
	Rational reduced = fraction.GetPresented();
	return stream << reduced.GetNominator() << "/" << reduced.GetDenominator();
}

int main(int, char**)
{
	setlocale(LC_ALL, "Russian");
	int long x;
	cout << "������� x(��� ������ ������� 0): "; cin >> x;

	while (x!=0) 
	{
		cout << "y(x)=";
		cout << (Rational(5*x, 5*x+8) - Rational(13, 10*x + 16)); cout << "\n";
		cout << "������� x(��� ������ ������� 0): "; cin >> x;

	}
	system("pause");
	return 0;
}



