// StoneWall.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <stack>

int solution(vector<int> &H) {
	// write your code in C++14 (g++ 6.2.0)
	stack<int> heights;
	int N = H.size();
	int blocks = 0;

	for (int i = 0; i < N; i++)
	{
		if (heights.empty())
		{
			heights.push(H[i]);
		}
		else if (H[i] > heights.top())
		{
			heights.push(H[i]);
		}
		else if (H[i] < heights.top())
		{
			while (!heights.empty() && H[i] < heights.top())
			{
				blocks++;
				heights.pop();
			}

			if (heights.empty() || H[i] != heights.top())
			{
				heights.push(H[i]);
			}
		}
	}

	while (!heights.empty())
	{
		blocks++;
		heights.pop();
	}
	return blocks;
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
