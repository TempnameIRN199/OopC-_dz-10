#include "Header.h"
#include "third_main.h"

int third()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	double arr2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	char arr3[] = { 'a', 'b', 'c', 'd', 'e' };

	cout << "Average int: " << Average(arr, 5) << endl;
	cout << "Average double: " << Average(arr2, 5) << endl;
	cout << "Average char: " << Average(arr3, 5) << endl;

	return 0;
}