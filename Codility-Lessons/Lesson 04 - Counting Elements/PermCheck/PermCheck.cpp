// PermCheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int solution(int N) {
	// write your code in C++14 (g++ 6.2.0)
	bool gapBegin = false;
	int currentLength = 0;
	int gapLength = 0;
	for (int i = 0; i < 32; i++)
	{
		if (N % 2 == 1) { gapBegin = true; }
		if (gapBegin && N % 2 == 0) { currentLength++; }
		if (N % 2 == 1 && gapBegin)
		{
			if (currentLength > gapLength) { gapLength = currentLength; }
			currentLength = 0;
		}
		N /= 2;
	}
	return gapLength;
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
