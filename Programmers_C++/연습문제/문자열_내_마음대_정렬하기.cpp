#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int K;
bool cmp(string a, string b){
    if(a[K] != b[K])
        return a[K] < b[K];
    return a < b;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    K = n;
    answer = strings;
    
    sort(answer.begin(), answer.end(), cmp);
    
    return answer;
}
