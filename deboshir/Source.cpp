#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;


class fraction
{
private:

	int num;
	int denum;


public:

	double tottal()
	{
		return num / denum;
	}

	fraction()
	{
		num = 0;
		denum = 1;
	}

	fraction(int num_P, int denum_P)
	{
		num = num_P;
		denum = denum_P;
	}

	void set_num(int num_P)
	{
		num = num_P;
	}

	void set_denum(int denum_P)
	{
		denum = denum_P;
	}

	int get_num()
	{
		return num;
	}

	int  get_denum()
	{
		return denum;
	}


	int sum(int num_P, int denum_P)
	{
		return num += num, denum *= denum;
	}

	int min(int num_P, int denum_P)
	{
		return num -= num, denum *= denum;
	}

	int umn(int num_P, int denum_P)
	{
		return num *= num, denum *= denum;
	}

	int del(int num_P, int denum_P)
	{
		return num *= denum, denum *= num;
	}
};







int main()
{
	setlocale(LC_ALL, "Rus");

	int num;
	int denum;

	int num2;
	int denum2;

	cout << "введите дробь 1" << "\n";
	cin >> num;
	cin >> denum;

	cout << "введите дробь 2" << "\n";
	cin >> num2;
	cin >> denum2;

	fraction frac{ num,denum }, frac2{ num2,denum2 };

	cout << "сложение" << "\n";
	cout << frac.sum(frac.get_denum(), frac.get_denum()) << "\n";

	cout << "минус";
	cout << frac.min(frac.get_denum(), frac.get_denum()) << "\n";

	cout << "умножение";
	cout << frac.min(frac.get_denum(), frac.get_denum()) << "\n";

	cout << "деление";
	cout << frac.del(frac.get_denum(), frac.get_denum()) << "\n";

	return 0;
}