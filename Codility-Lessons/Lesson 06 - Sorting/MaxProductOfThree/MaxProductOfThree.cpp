// MaxProductOfThree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <algorithm>

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	sort(A.begin(), A.end());
	int N = A.size();

	int product1 = A[N - 1] * A[N - 2] * A[N - 3];
	int product2 = A[0] * A[1] * A[N - 1];
	return max(product1, product2);
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
