// Laboratory_two.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>


using namespace std;


double summa(double a, double b)
{
	return  a + b;
}

double sub(double a, double b)
{
	return a - b;
}

double mult(double a, double b)
{
	return a*b;
}

double dev(double a, double b)
{
	if (b != 0) return a / b;
	else return 0;
}

double pow(double a, double b)
{
	double c;
	c = 1;
	if (b == 0) c = 1;
	else if (b > 0)

		while (b > 0)
		{
			c = c*a;
			b = b - 1;
		}
	else if (b < 0)
		while (b < 0)
		{
			c = c / a;
			b = b + 1;
		}
	return c;
}

double sqrt(double a)
{
	if (a <= 0)
		return 0;
	else
	{
		double c;
		c = 1;
		while (c*c != a)
		{
			c = 1. / 2 * (c + a / c);
		}
		return c;
	}
}



int main()
{
	double a, b;

	printf_s("\n a = "); scanf_s("%lf", &a);
	printf_s("\n b = "); scanf_s("%lf", &b);
	printf_s("\n a + b =%f", summa(a, b));
	printf_s("\n a - b =%f", sub(a, b));
	printf_s("\n a * b =%f", mult(a, b));
	printf_s("\n a / b =%f", dev(a, b));
	printf_s("\n a ^ b =%f", pow(a, b));
	printf_s("\n a^(1/2) =%f", sqrt(a));

	system("pause");
	return 0;
}
