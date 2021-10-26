#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int cnt;
    bool flag[n+1];
    
    if(n == 0 || n == 1){
        return n;
    }
    
    for(int i=0; i<n; i++){
        flag[i] = false;
    }
    
    for(int i=0; i<reserve.size(); i++){
        flag[reserve[i]] = true;
    }
    
    for(int i=0; i<lost.size(); i++){
        if(flag[lost[i] - 1] == true){
            flag[lost[i] - 1] = false;
            cnt++;
        }
        
        else if(flag[lost[i] + 1] == true){
            flag[lost[i] + 1] = false;
            cnt++;
        }
    }
    
    answer = n - (lost.size() - cnt);
    
    return answer;
}
