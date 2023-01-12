#include "Header.h"
#include "second_main.h"

int second()
{
	int a = 5, b = 10;
	double c = 5.5, d = 10.5;
	char e = 'a', f = 'b';

	cout << "Min int: " << Min(a, b) << endl;
	cout << "Min double: " << Min(c, d) << endl;
	cout << "Min char: " << Min(e, f) << endl;

	return 0;
}