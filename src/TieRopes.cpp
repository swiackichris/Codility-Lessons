int solution(int K, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int ropes = 0;
    int size = 0;
    
    for(int i = 0; i < A.size(); i++)
    {
        size += A[i];
        if(size >= K)
        {
            ropes++;
            size = 0;
        }
    }
    
    return ropes;
}
