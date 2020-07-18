// Brackets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <algorithm>
#include <vector>

int solution(string &S) {
	// write your code in C++11 (g++ 4.8.2)

	int N = S.size();
	vector<char> chars;

	for (int i = 0; i < N; ++i) {
		char currentChar = S[i];
		if (currentChar == '(' || currentChar == '{' || currentChar == '[' ) 
		{
			chars.push_back(currentChar);
		}
		else {
			if (chars.empty()) return 0;
			char lastChar = chars.back();

			if (currentChar == ')' && lastChar != '(') return 0;
			if (currentChar == '}' && lastChar != '{') return 0;
			if (currentChar == ']' && lastChar != '[') return 0;
			chars.pop_back();
		}
	}
	if (chars.empty()) return 1;
	else return 0;
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
