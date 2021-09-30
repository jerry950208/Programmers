#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "", tmp[3] = {"4", "1", "2"};
    
    while(n){
        answer = tmp[n % 3] + answer;
        
        if(!(n % 3))
            n = n / 3 - 1;
        
        else
            n = n / 3;
    }
    
    return answer;
}

/*
//다른사람의 풀이 및 새로운 arr사용법
#include <vector>
#include <string>
using namespace std;

string solution(int n){
	
	string answer = "";
	int a;

	while(n > 0){
		a = n % 3;
		n = n / 3;

		if(a == 0)
			n -= 1;

		answer = "412"[a] + answer; //이부분 따로 공부해보기
	}

	return answer;
}
*/
