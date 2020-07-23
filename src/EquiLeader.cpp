#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() == 1) return 0;

    vector<int>B(A);
    sort(A.begin(), A.end());
    int count = 1;
    int dominator = 0;
    
    for(int i = 1; i < A.size(); i++)
    {
        if(A[i] == A[i-1]) 
        {
            count++;
        }
        else count = 1;
        if(count*2>A.size()) dominator = A[i];
    }
    
    int totalD = 0;
    int firstD = 0;
    int equi = 0;
    
    for(int i : B) if(i == dominator) totalD++;
    
    int sizeFirst = 0;
    for(int i = 0; i < B.size(); i++)
    {
        sizeFirst++;
        if(B[i] == dominator) 
        {
            firstD++;
            totalD--;
        }
        
        if(sizeFirst < B.size())
        {
            if(firstD*2 > sizeFirst && totalD*2 > B.size()-sizeFirst)
            equi++;
        }
    }
    
    return equi;
}
