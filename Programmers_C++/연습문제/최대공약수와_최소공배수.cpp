#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int tmp = 0;
    for(int i=1; i<=m; i++){
        if(n % i == 0 && m % i == 0){
            tmp = i;
        }
    }
    if(tmp == 0)
        answer.push_back(1);
    else
    	answer.push_back(tmp);
    int cnt = 1;
    tmp = m;
    while(1){
        if(n * cnt == tmp){
            answer.push_back(tmp);
            break;
        }
        else if(n * cnt > tmp){
            tmp += m;
            cnt = 1;
        }
        else
            cnt++;
    }
    return answer;
}
