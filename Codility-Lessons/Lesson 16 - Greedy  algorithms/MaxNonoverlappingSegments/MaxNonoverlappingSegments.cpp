// MaxNonoverlappingSegments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int solution(vector<int> &A, vector<int> &B) {
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	if (N < 2) return N;
	int maxNon = 1;
	int i = 1;
	int currentSegment = B[0];

	while (i < N)
	{
		while (i < N && A[i] <= currentSegment) i++;
		if (i == N) break;
		maxNon++;
		currentSegment = B[i];
	}
	return maxNon;
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
