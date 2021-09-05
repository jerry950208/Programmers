#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int cnt = 0;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] % divisor == 0)
            answer.push_back(arr[i]);
        
        else if(i == arr.size() -1 && answer.empty())
            answer.push_back(-1);
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}
