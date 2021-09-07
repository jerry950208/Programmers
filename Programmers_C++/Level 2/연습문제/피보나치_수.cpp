#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, F[2] = {0 , 1};
    
    for(int i=2; i<=n; i++){
        answer = (F[0] + F[1]) % 1234567;
        F[0] = F[1];
        F[1] = answer;
    }
     
    return answer;
}
