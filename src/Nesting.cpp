
#include <stack>

int solution(string &S) {

	stack<char> chars;
	
	for(int i = 0; i < S.size(); i++)
	{
	    if(S[i] == '(') chars.push(S[i]);
	    else
	    {
	        if(S[i] == ')' && chars.top() != '(') return 0;
	        chars.pop();
	    }
	}
	 
	if(!chars.empty()) return 0;
	else return 1;
}
