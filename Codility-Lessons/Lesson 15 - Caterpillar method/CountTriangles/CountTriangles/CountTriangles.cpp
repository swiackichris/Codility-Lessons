// CountTriangles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <algorithm>

int solution(vector <int> &A) {

	int N = A.size();
	sort(A.begin(), A.end());
	int triangles = 0;
	int a = 0;
	int b = 0;

	for (int c = N - 1; c >= 1; c--) {
		a = 0;
		b = c - 1;
		while (a < b) {
			if (A[a] + A[b] > A[c]) {
				triangles += b - a;
				b--;
			}
			else a++;
		}
	}
	return triangles;
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
