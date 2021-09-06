#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = false;
   	if(s.size() == 4){
    	for(int i=0; i<s.size(); i++){
            if(s[i] >= 'a')
                break;
            else if(i == s.size()-1)
                answer = true;
        }
    }
	return answer;
}

//새로 알게된 함수 isdigit() : 숫자를 판단하는 함수
#include <string>
#include <vector>
using namespace std;

bool solution(string s) {
    bool answer = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i]))		//매개변수로 들어온 char타입이 10진수 숫자로 변경이 가능하면 0이 아닌 숫자(true), 아니면 0(false)를 반환
            answer = false;
    }

    return s.size() == 4 || s.size() == 6 ? answer : false;
}

