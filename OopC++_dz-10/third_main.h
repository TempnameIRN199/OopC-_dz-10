#pragma once
#include "Header.h"

template <typename T> T Average(T* arr, int size)
{
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}