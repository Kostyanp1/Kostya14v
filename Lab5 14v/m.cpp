#include<iostream>
#include"Rational.h"
#include<cstdlib>
using namespace std;

//ѕерегрузка операции <<
ostream &operator<<(ostream& stream,Rational const& fraction)
{
	Rational reduced = fraction.GetPresented();
	return stream << reduced.GetNominator() << "/" << reduced.GetDenominator();
}

int main(int, char**)
{
	setlocale(LC_ALL, "Russian");
	int long x;
	cout << "¬ведите x(дл€ выхода введите 0): "; cin >> x;

	while (x!=0) 
	{
		cout << "y(x)=";
		cout << (Rational(5*x, 5*x+8) - Rational(13, 10*x + 16)); cout << "\n";
		cout << "¬ведите x(дл€ выхода введите 0): "; cin >> x;

	}
	system("pause");
	return 0;
}



