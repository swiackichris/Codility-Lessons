
#include <iostream>
#include <deque>
#include <algorithm>

int solution(int N) {

    deque<int>binary;
    int gapCount = 0;
    int maxGap = 0;

    while (N > 0)
    {
        binary.push_front(N % 2);
        N /= 2;
    }

    for (int i : binary)
    {
        if (i == 1)
        {
            maxGap = max(maxGap, gapCount);
            gapCount = 0;
        }
        if (i == 0) gapCount++;
    }

    return maxGap;
}
