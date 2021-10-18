#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    int flag = sum;
    
    for(int i=1; i<=brown; i++){
        for(int j=1; j<=brown; j++){
            if(i*j == sum && max(i,j) - min(i,j) < flag){
                answer.erase(answer.begin(), answer.end());
                answer.push_back(j);
                answer.push_back(i);
                flag = max(i,j) - min(i,j);
            }
        }
    }
    return answer;
}
