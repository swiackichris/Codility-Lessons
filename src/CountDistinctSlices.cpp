// CountDistinctSlices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int solution(int M, vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)

	int N = A.size();
	vector<int> counter;
	vector<int> check(M + 1);
	int slices = 0;
	int sliceLength = 0;

	for (int i = 0; i < N; i++)
	{
		counter.push_back(A[i]);
		check[A[i]]++;
		if (counter.size() > 1 && check[A[i]] > 1)
		{
			for (int j = 0; j < (int)counter.size() - 1; j++)
			{
				if (A[i] == counter[j])
				{
					counter.erase(counter.begin(), counter.begin() + j + 1);
					sliceLength -= j + 1;
					break;
				}
			}
			check[A[i]]--;
		}
		sliceLength++;
		slices += sliceLength;
		if (slices > 1e9) return 1e9;
	}
	return slices;
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
