#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, divisor = 1;
    while(divisor <= n){
        
        if(n % divisor == 0) answer += divisor;
       
        divisor++;
    }   
    return answer;
}
