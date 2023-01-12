#pragma once
#include "Header.h"

//Напишите шаблон функции, которая возвращает максимум из двух переданных параметров (int, double, char).

template <typename T> T Max(T a, T b)
{
	return a > b ? a : b;
}