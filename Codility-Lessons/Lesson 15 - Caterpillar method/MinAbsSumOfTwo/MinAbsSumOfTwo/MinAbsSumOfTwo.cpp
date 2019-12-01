// MinAbsSumOfTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>

int absSort(int i, int j)
{
	return abs(i) < abs(j);
}

int solution(vector<int>& A) {
	// write your code in C++11 (g++ 4.8.2)
	int N = A.size();
	if (N == 1) return 2 * abs(A[0]);
	sort(A.begin(), A.end(), absSort);

	int minAbs = 2 * abs(A[0]);
	int currentMin = 2 * abs(A[0]);

	for (int i = 1; i < N; i++)
	{
		currentMin = abs(A[i - 1] + A[i]);
		minAbs = min(currentMin, minAbs);
	}

	return minAbs;
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
