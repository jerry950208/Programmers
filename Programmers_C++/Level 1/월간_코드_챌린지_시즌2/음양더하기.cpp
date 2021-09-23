#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for(int idx=0; idx<absolutes.size(); idx++){
        if(signs[idx])
            answer += absolutes[idx];
        else
            answer -= absolutes[idx];
    }
    return answer;
}
