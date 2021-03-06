#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

struct binom  //search for zero algorythm
{
	int a;
	int b;
	int c;
};

double f_binom(double x,binom f)
{
	return (x*x*f.a + x*f.b + f.c);
}

double derivative_calculation(double (*f)(double),double x,double dx) // dy/dx
{
	double df= f(x + dx) - f(x); // dy
	double derivative = df / dx; 
	return derivative;
}

void  derivative_analytics(double(*f)(double), const double x, const double dx)
{
	const double der_x = derivative_calculation(f, x, dx); 
	const double der_x_plus = derivative_calculation(f, x + dx, dx); //+0
	const double der_x_minus = derivative_calculation(f, x - dx, dx); //-0

	if (der_x - dx <=0)
	{
		if (der_x_plus >= 0 && der_x_minus <= 0)
		{
			cout << "its minimum!\n";
			return;
		}
		else
			if (der_x_plus <= 0 && der_x_minus >= 0)
			{
				cout << "its maximum!\n";
				return;
			}
		
	}
	if (der_x >= 0)
	{
		cout << "increasing!\n";
	}
	else
	{
		cout << "decreasing!\n";
	}
}

double func(double x)
{
	return (pow(x,14)+sin(3*x/2));
}

int main()
{
	
	derivative_analytics(func,-1, 0.00001);
	LinkedList example;
	example.Add(10);
	example.Add(11);
	example.Show();


	return 0;

}