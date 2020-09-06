int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    
    int segments = 0;
    int lastEnd = -1;
    
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] > lastEnd) 
        {
            segments++;
            lastEnd = B[i];
        }
    }
    
    return segments;
}
