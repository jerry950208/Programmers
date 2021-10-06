#include <string>
#include <vector>

using namespace std;

int find_demical(int n){
    bool flag = false;
    for(int i=2; i<=n; i++){
        if(n % i == 0){
            flag = true;
         	break;   
        }
    }
    
    if(flag)
        return 1;
    
    else
        return 0;
    
}

int solution(string numbers) {
    int answer = 0;
    
    return answer;
}
