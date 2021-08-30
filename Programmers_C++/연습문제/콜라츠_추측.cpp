#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long answer = 0;
    while(num != 1){
		if(answer >= 400) return -1;
        
        else if(num % 2 == 0) num /= 2;

        else num = num * 3 + 1;
		
        answer++;
    }
    return answer;
}
