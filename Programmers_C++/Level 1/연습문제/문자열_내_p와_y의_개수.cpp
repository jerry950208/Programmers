#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
	int cnt_y = 0, cnt_p = 0;
    
    for(int i=0; i<s.size(); i++){
        
        if(s[i] == 'y' || s[i] == 'Y')
            cnt_y++;
        
        else if(s[i] == 'p' || s[i] == 'P')
            cnt_p++;
    }
    
    if(cnt_y == cnt_p)
        answer = true;
    
    else
        answer = false;
    
    return answer;
}
