#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int cnt = 0;
    bool flag[n];
    
    for(int i=0; i<reserve.size(); i++)
        flag[reserve[i]] = true;
	
    for(int i=0; i<lost.size(); i++){
        
        if(flag[lost[i]] == true)
            flag[lost[i]] = false;
        
        else if(flag[lost[i]-1] == true){
            cnt++;
            flag[lost[i]-1] = false;
        }
        else if(flag[lost[i]+1] == true){
            cnt++;
            flag[lost[i]+1] = false;
        }
    }
    
    answer = n - lost.size() + cnt;
    return answer;
}
