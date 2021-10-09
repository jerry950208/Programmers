#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    int max = 0, result;
    for(int i=1; i<=s; i++){
        if(i * (s-i) > max && ){
            max = i * (s-1);
        	result = i;
        }
    }
    
    answer.push_back(result);
    answer.push_back(s-n);
    return answer;
}
