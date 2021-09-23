#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0, Dp[2] = {1, 2};
    
    if(n == 1)
        answer = Dp[0];
    
    else if(n == 2)
        answer = Dp[1];
    
    else{
        for(int i=2; i<n; i++){
            long long tmp;
            tmp = Dp[0] + Dp[1];
            Dp[0] = Dp[1];
            Dp[1] = tmp;
        }
        
        answer = Dp[1];
    }
    return answer;
}
