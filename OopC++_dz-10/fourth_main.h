#pragma once
#include "Header.h"

template <typename T> T LinearEquation(T a, T b)
{
	return -b / a;
}

template <typename T> T QuadraticEquation(T a, T b, T c)
{
	return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}