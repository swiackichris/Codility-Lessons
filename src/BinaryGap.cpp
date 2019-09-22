#include "pch.h"
#include <iostream>

using namespace std;

int solution(int N) {
	// write your code in C++14 (g++ 6.2.0)
	bool hasStarted = false;
	bool hasEnded = false;
	int currentGapLength = 0;
	int gapLength = 0;
	for (int i = 0; i < 32; i++)
	{
		cout << N % 2;
		if (!hasStarted && N % 2 == 1) { hasStarted = true; }
		if (hasStarted && N % 2 == 0) { currentGapLength++; }
		if (hasStarted && N % 2 == 1)
		{
			if (currentGapLength > gapLength) { gapLength = currentGapLength; }
			currentGapLength = 0;
		}
		N /= 2;
	}
	return gapLength;
}