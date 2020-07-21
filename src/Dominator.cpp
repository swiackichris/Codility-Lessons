#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()) return -1;
    if(A.size() == 1) return 0;
    vector<int>B(A);
    sort(A.begin(), A.end());
    int count = 1;
    
    for(int i = 1; i < A.size(); i++)
    {
        if(A[i] == A[i-1]) 
        {
            count++;
        }
        else count = 1;
        if(count*2>A.size()) 
        {
            int dominator = A[i];
            for(int i = 0; i < B.size(); i++)
            {
                if(B[i] == dominator) return i;
            }
        }
    }
    
    return -1;
}
