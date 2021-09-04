#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.size() % 2 == 1)
		answer = s[s.size() / 2];
    
    else{
        answer = s[s.size() / 2 - 1];
        answer += s[s.size() / 2];
    }
        
    return answer;
}

//새로운 함수 substr
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    if (s.length() % 2 == 0)
        answer = s.substr((s.length()/2)-1, 2);	//s.length() / 2 - 1 위치 포함 +2 만큼 있는 문자열;
    
	else
        answer = s[s.length()/2];
    
    return answer;
}
