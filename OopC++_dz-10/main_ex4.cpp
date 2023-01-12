#include "Header.h"
#include "fourth_main.h"

int fourth()
{
	int a = 5, b = 10, c = 15;
	double d = 5.5, e = 10.5, f = 15.5;
	
	cout << "LinearEquation int: " << LinearEquation(a, b) << endl;
	cout << "LinearEquation double: " << LinearEquation(d, e) << endl;
	
	cout << "QuadraticEquation int: " << QuadraticEquation(a, b, c) << endl;
	cout << "QuadraticEquation double: " << QuadraticEquation(d, e, f) << endl;

	return 0;
}