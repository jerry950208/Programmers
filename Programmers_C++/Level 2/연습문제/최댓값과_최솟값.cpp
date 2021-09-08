#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    string tmp;
    vector<int> v;
    
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            v.push_back(atoi(tmp.c_str()));
            tmp.clear();
        }
        else
            tmp += s[i];
    }
    
    v.push_back(atoi(tmp.c_str()));
    sort(v.rbegin(), v.rend());
    answer += to_string(v.back()) + " " + to_string(v.front());
    
    return answer;
}
