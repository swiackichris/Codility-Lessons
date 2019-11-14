// MinAvgTwoSlice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int solution(vector<int>& A) {
	// write your code in C++14 (g++ 6.2.0)
	int beginPos = 0;
	int N = A.size();
	double minAvg = 1e9;
	double currentAvg = 1e9;
	double sum = A[0];
	int count = 1;

	double twoSum = A[0];

	for (int i = 1; i < N; i++)
	{
		sum += A[i];
		twoSum += A[i];
		count++;
		currentAvg = sum / count;

		if (twoSum / 2 < currentAvg)
		{
			sum = twoSum;
			currentAvg = twoSum / 2;
			count = 2;
		}

		if (currentAvg < minAvg)
		{
			minAvg = currentAvg;
			beginPos = i - count + 1;
		}
		twoSum -= A[i - 1];
	}

	return beginPos;
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
