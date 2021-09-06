#include <string>//	to_string
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    answer += "김서방은 ";
    
    for(int i=0; i<seoul.size(); i++){
        if(seoul[i] == "Kim"){
            answer += to_string(i);	// 숫자 타입의 데이터를 안전하게 스트링 타입으로 변경하도록 하는 함수
        	break;
        }
    }
    
    answer += "에 있다";
    
    return answer;
}

//to_string(int) -> int형 뿐아니라 long, long long, float, double형등 여러가지가 올수도 있다
