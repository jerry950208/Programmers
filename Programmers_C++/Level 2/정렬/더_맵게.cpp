#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    while(1){
        sort(scoville.begin(), scoville.end());
        
        if(scoville[0] < K){
            scoville.push_back(scoville[0] + scoville[1] * 2);
            scoville.erase(scoville.begin(), scoville.begin()+2);
            answer++;
        }
        
        else
            break;
    }
    return answer;
}
