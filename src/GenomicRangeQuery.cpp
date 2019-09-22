// GenomicRangeQuery.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <unordered_map>

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
	// write your code in C++11 (g++ 4.8.2)
	vector<int> pre_sum_A;
	vector<int> pre_sum_C;
	vector<int> pre_sum_G;

	int N = P.size();
	int M = S.size();
	vector<int> impact(N);

	int count_A = 0;
	int count_C = 0;
	int count_G = 0;

	for (int i = 0; i < M; i++)
	{
		if (S[i] == 'A') count_A++;
		else if (S[i] == 'C') count_C++;
		else if (S[i] == 'G') count_G++;

		pre_sum_A.push_back(count_A);
		pre_sum_C.push_back(count_C);
		pre_sum_G.push_back(count_G);
	}

	for (int i = 0; i < N; i++)
	{
		int A = (S[P[i]] == 'A') ? 1 : 0;
		int C = (S[P[i]] == 'C') ? 1 : 0;
		int G = (S[P[i]] == 'G') ? 1 : 0;
		if (pre_sum_A[Q[i]] - pre_sum_A[P[i]] + A > 0) impact[i] = 1;
		else if (pre_sum_C[Q[i]] - pre_sum_C[P[i]] + C > 0) impact[i] = 2;
		else if (pre_sum_G[Q[i]] - pre_sum_G[P[i]] + G > 0) impact[i] = 3;
		else impact[i] = 4;
	}
	return impact;
}

