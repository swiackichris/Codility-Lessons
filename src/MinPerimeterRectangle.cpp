int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int a = 0, b = 0, i = 1;
    while(i*i <= N)
    {
        if(N%i == 0)
        {
            a = i;
            b = N/i;
        }
        i++;
    }
    
    return 2*a + 2*b;
}
