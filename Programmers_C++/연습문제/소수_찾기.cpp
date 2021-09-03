#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool arr[1000000];
    	for(int i=2; i<=n; i++){
            for(int j=i+i; j<=n; j+=i){
                if(arr[j] == false)
                    arr[j] = true;
            }
        }
    	
   	for(int i=2; i<=n; i++)
        if(arr[i] == false)
            answer++;
    
    return answer;
}
