#include <stack>
#include <algorithm>

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    
    int size = 0;
    stack<int>last;
    
    for(int i = 0; i < A.size(); i++)
    {
        if(last.empty() || A[i] > last.top())
        {
            if(!last.empty()) last.pop();
            last.push(B[i]);
            size++;
        }
    }
    
    return size;
}
