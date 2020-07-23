#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int maxPrice = 0;
    int profit = 0;
    int maxProfit = 0;
    
    for(int i = A.size()-1; i >= 0; i--)
    {
        maxPrice = max(maxPrice, A[i]);
        profit = maxPrice - A[i];
        maxProfit = max(maxProfit, profit);
    }
    
    return maxProfit;
}
