

#include <stack>

int solution(vector<int> &H) {
    
    stack<int>heights;
    int blocks = 0;
    
    for(int i = 0; i < H.size(); i++)
    {
        while(!heights.empty() && H[i] < heights.top()) 
        {
            heights.pop();
            blocks++;
        }
        if(heights.empty() || H[i] > heights.top()) heights.push(H[i]);
    }
    return blocks + heights.size();
}
