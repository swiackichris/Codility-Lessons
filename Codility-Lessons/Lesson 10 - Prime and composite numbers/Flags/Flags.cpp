// Flags.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>

int solution(vector<int> &A) {

	int N = A.size();
	if (N < 3) return 0;
	vector<int>peaks(N);
	int maxFlags = 0;
	int lastPeak = -1;
	peaks.back() = lastPeak;

	for (auto i = ++A.rbegin(); i != --A.rend(); i++)
	{
		int index = N - (i - A.rbegin()) - 1;
		if (*i > *(i - 1) && *i > *(i + 1)) lastPeak = index;
		peaks[index] = lastPeak;
	}

	peaks.front() = lastPeak;

	for (int i = 1; i*i <= N + i; i++)
	{
		int nextPeak = peaks[0];
		int flags = 0;
		for (int j = 0; j < i && nextPeak != -1; j++, flags++)
		{
			if (nextPeak + i >= N) nextPeak = -1;
			else nextPeak = peaks[nextPeak + i];
		}
		maxFlags = max(maxFlags, flags);
	}
	return maxFlags;
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
