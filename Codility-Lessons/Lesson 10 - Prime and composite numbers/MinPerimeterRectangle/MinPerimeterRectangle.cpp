// MinPerimeterRectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <algorithm>

int solution(int N) {
	// write your code in C++14 (g++ 6.2.0)
	int i = 1;
	int factorFirst = 0;

	while (i*i <= N)
	{
		if (i*i == N) return i * 4;
		if (N%i == 0) factorFirst = i;
		i++;
	}
	return (factorFirst * 2) + (N / factorFirst) * 2;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
