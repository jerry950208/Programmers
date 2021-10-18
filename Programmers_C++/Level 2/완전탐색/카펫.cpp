#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    int flag = sum;
    
    for(int i=1; i<=sum/2; i++){
        for(int j=1; j<=sum; j++){
            if(i*j == sum && i-j < flag){
                answer.erase(answer.begin(), answer.end());
                answer.push_back(i);
                answer.push_back(j);
            }
        }
    }
    return answer;
}
