#pragma once
#include "Header.h"

//�������� ������ �������, ������� ���������� �������� �� ���� ���������� ���������� (int, double, char).

template <typename T> T Max(T a, T b)
{
	return a > b ? a : b;
}