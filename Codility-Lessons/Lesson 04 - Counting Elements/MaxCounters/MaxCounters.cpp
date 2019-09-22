#include "pch.h"
#include <iostream>
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int M = A.size();
	vector<int> counter(N);
	int currentMax = 0;
	int max = 0;
	int lastMax = 0;

	// Check when is the last max.
	for (int i = 0; i < M; i++)
	{
		if (A[i] == N + 1) { lastMax = i; }
	}

	for (int i = 0; i < M; i++)
	{
		if (A[i] == N + 1)
		{

		}
		else
		{
			counter[A[i] - 1]++;
			currentMax = counter[A[i]];
			if (currentMax > max) { max = currentMax; }
		}
	}
	return counter;
}

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int M = A.size();
	vector<int> counter(N);
	int currentMax = 0;
	int max = 0;
	int lastMaxI = 0;

	// Check which "i" is the last max counter
	for (int i = 0; i < M; i++)
	{
		if (A[i] == N + 1) { lastMaxI = i; }
	}

	// find max counter value
	for (int i = 0; i < lastMaxI; i++)
	{
		counter[A[i]]++;
		currentMax = counter[A[i]];
		if (currentMax > max) { max = currentMax; }
	}

	// Implement operation max counter
	for (int i = 0; i < N; i++)
	{
		counter[i] = max;
	}

	// Increase all counters operation max counter
	for (int i = lastMaxI + 1; i < M; i++)
	{
		counter[A[i] - 1]++;
	}
	return counter;


	// What if there is more max counters.
}


vector<int> solution(int N, vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int M = A.size();
	vector<int> counter(N);
	int currentMax = 0;
	int max = 0;
	int lastMaxI = 0;
	int maxCounter = 0;

	// Make function that does all max counter functions.
	// - Find first max counter
	// - Find second max counter etc etc
	// - Find last max counter

	for (int i = 0; i < M; i++)
	{
		// Sets maxCounter value to the highest value in vector.
		if (A[i] == N + 1) { maxCounter = max; }

		// Finds highest value in vector.
		else
		{
			counter[A[i]]++;
			currentMax = counter[A[i]];
			if (currentMax > max) { max = currentMax; }
		}
	}

	// Check which "i" is the last max counter
	for (int i = 0; i < M; i++)
	{
		if (A[i] == N + 1) { lastMaxI = i; }
	}

	// find max counter value
	for (int i = 0; i < lastMaxI; i++)
	{
		counter[A[i]]++;
		currentMax = counter[A[i]];
		if (currentMax > max) { max = currentMax; }
	}

	// Implement operation max counter
	for (int i = 0; i < N; i++)
	{
		counter[i] = max;
	}

	// Increase all counters operation max counter
	for (int i = lastMaxI + 1; i < M; i++)
	{
		counter[A[i] - 1]++;
	}
	return counter;


	// What if there is more max counters.
}