#include "Header.h"
#include "first_main.h"

int first()
{
	int a = 5, b = 10;
	double c = 5.5, d = 10.5;
	char e = 'a', f = 'b';
	
	cout << "Max int: " << Max(a, b) << endl;
	cout << "Max double: " << Max(c, d) << endl;
	cout << "Max char: " << Max(e, f) << endl;
	
	return 0;
}