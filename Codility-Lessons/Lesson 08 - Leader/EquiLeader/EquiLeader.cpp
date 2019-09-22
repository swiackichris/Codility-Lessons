// EquiLeader.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <algorithm>

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	vector<int> copy(N);
	int dominatorCount = 1;
	bool dominator = false;
	int dominatorNumber = 0;

	for (int i = 0; i < N; i++)
	{
		copy[i] = A[i];
	}

	sort(copy.begin(), copy.end());

	for (int i = 0; i < N; i++)
	{
		if (copy[i] == copy[i + 1])
		{
			dominatorCount++;
		}
		if (dominatorCount > N / 2)
		{
			dominatorNumber = copy[i];
			dominator = true;
			break;
		}
		else if (copy[i] != copy[i + 1])
		{
			dominatorCount = 1;
		}
	}

	if (!dominator) return 0;

	int dominatorTotal = 0;
	int dominatorFirst = 0;
	int dominatorSecond = 0;
	int equiLeader = 0;

	for (int i = 0; i < N; i++)
	{
		if (A[i] == dominatorNumber) dominatorTotal++;
	}

	for (int S = 0; S < N; S++)
	{
		if (A[S] == dominatorNumber)
		{
			dominatorFirst++;
		}
		dominatorSecond = dominatorTotal - dominatorFirst;
		if (dominatorFirst > (S + 1) / 2 && dominatorSecond > (N - 1 - S) / 2)
		{
			equiLeader++;
		}
	}
	return equiLeader;
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
