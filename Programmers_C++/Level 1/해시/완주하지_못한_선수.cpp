#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion){
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for(int i=0; i<participant.size(); i++)
        if(participant[i] != completion[i])
            return participant[i];
}

/*
//다른사람의 풀이
#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion){
   
    map<string, int> m;
    
    for(auto c : completion)
        m[c] += 1;
    
    for(auto p : participant){
        m[p] -= 1;
        if(m[p] < 0)
            return p;
    }
    
}*/
*/
