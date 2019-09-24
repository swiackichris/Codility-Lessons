// MinAvgTwoSlice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	float sum = A[0];
	int sumCount = 1;
	float twoSum = 0;
	int twoSumCount = 0;
	int startPos = 0;
	float currentAvg = 10000;
	float twoSumAvg = 10000;
	float maxAvg = 10000;

	for (int i = 1; i < N; i++)
	{
		// Calculate current average
		sum += A[i];
		sumCount++;
		currentAvg = sum / sumCount;
		if (currentAvg < maxAvg)
		{
			startPos = i + 1 - sumCount;
			maxAvg = currentAvg;
		}

		// Calculate average of the newest two integers
		twoSum += A[i];
		twoSumCount++;
		if (twoSumCount == 2)
		{
			twoSumAvg = twoSum / 2;
			if (twoSumAvg < maxAvg)
			{
				maxAvg = twoSumAvg;
				startPos = i - 1;
			}
			if (twoSumAvg < currentAvg)
			{
				currentAvg = twoSumAvg;
				sum = twoSum;
				sumCount = twoSumCount;
			}
			twoSum -= A[i - 1];
			twoSumCount--;
		}
	}
	return startPos;
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
