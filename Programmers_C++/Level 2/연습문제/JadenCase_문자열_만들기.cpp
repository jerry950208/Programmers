#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    
    string answer = "";
    answer = toupper(s[0]);
    
    for(int i=1; i<s.size(); i++)	// tolower로 모든 수 소문자로 변환
        s[i] = tolower(s[i]);
    
    for(int i=1; i<s.size(); i++){
        
        if(s[i] == ' '){			//공백이 있을경우 다음 idx의 값 toupper
            answer += ' ';
            s[i + 1] = toupper(s[i + 1]);
        }
        
        else
        	answer += s[i];			//아닐경우 answer로 넣어준다
        
    }
    return answer;
}
