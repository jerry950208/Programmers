#include <string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    stack<int> st;
    bool answer = true;
	
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(')
            st.push(s[i]);
        
        else{
            if(st.empty()){
                answer = false;
             	break;   
            }
            else
                st.pop();
        }
    }
	if(!st.empty())
        answer = false;
    
    return answer;
}

//-----------------------------------------------
//stack 사용을 안했을경우
#include <string>
#include <iostream>
using namespace std;

bool solution(string s){
	
	int n = 0;

	for(int i=0; i<s.length(); i++){
		
		if(n < 0)
			return false;
			
		if(s[i] == '(')
			n++;
		
		else if(s[i] == ')')
			n--;
	}

	return n == 0; 			//여기서 n == 0의 의미는 n이 0일경우 true를 반환, 아닐경우 false를 반환한다
}
