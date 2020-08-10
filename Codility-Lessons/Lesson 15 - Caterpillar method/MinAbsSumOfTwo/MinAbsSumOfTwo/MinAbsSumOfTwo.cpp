#include <algorithm>

int solution(vector<int>& A) {
    // write your code in C++14 (g++ 6.2.0)

    sort(A.begin(), A.end(), [](int i, int j) { return abs(i) < abs(j); });

    int minSum = abs(A[0] + A[0]);
    int sum = abs(A[0] + A[0]);

    for (int i = 1; i < A.size(); i++)
    {
        sum = abs(A[i] + A[i - 1]);
        minSum = min(minSum, sum);
    }

    minSum = min(minSum, abs(A[0] + A[0]));

    return minSum;
}
