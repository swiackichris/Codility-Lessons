// Peaks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

int solution(vector<int>& A) {
	// write your code in C++14 (g++ 6.2.0)

	int N = A.size();
	vector<int> peaksPos;

	for (int i = 1; i < N - 1; i++)
	{
		if (A[i - 1] < A[i] && A[i] > A[i + 1]) peaksPos.push_back(i);
	}

	sort(peaksPos.begin(), peaksPos.end());
	int i = peaksPos.size();
	int X = peaksPos.size();

	while (i > 0)
	{
		if (N % i == 0)
		{
			int blockSize = N / i;
			int multiplier = 0;
			for (int j = 0; j < X; j++)
			{
				if (peaksPos[j] >= (blockSize * multiplier) && peaksPos[j] < (blockSize * (multiplier + 1)))
				{
					multiplier++;
				}

				if (multiplier == i) return i;
			}
		}
		i--;
	}
	return 0;
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
