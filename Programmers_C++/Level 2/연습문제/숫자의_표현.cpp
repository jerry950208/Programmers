#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1; i<=n; i++){
        int sum = 0, tmp = i;
        
        while(sum <= n){
            
            if(sum < n)
                sum += tmp++;
            
            else if(sum == n){    
                answer++;
                break;
            }
        }
    }
    return answer;
}
