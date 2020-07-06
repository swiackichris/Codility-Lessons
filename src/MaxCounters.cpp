#include <algorithm>

vector<int> solution(int N, vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
    vector<int>counters(N);
    int currentMax = 0;
    int allSet = 0;
    
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] >= 1 && A[i] <= N) 
        {
            if(counters[A[i]-1] < allSet) counters[A[i]-1] = allSet;
            counters[A[i]-1]++;
            currentMax = max(currentMax, counters[A[i]-1]);
        }
        
        if(A[i] == N+1)
        {
            allSet = currentMax;
        }
    }
    
    for(int i = 0; i < counters.size(); i++)
    {
        if(counters[i] < allSet) counters[i] = allSet;
    }
    
    return counters;
}
