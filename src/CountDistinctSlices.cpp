int solution(int M, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    vector<int>counter;
    vector<int>check(M+1);
    int multi = 0;
    int distinct = 0;
    
    for(int i = 0; i < A.size(); i++)
    {
        if(check[A[i]] > 0)
        {
            for(int j = 0; j < counter.size(); j++)
            {
                if(A[i] == counter[j])
                {
                    counter.erase(counter.begin(), counter.begin()+j+1);
                    multi = counter.size();
                    break;
                }   
            }
        }
        
        counter.push_back(A[i]);
        check[A[i]]++;
        multi++;
        distinct += multi;
        
        if(distinct > 1e9) return 1e9;
    }
    
    return distinct;
}
