#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')	answer.push_back(s[i]+n > 'Z' ? s[i] += n - 'Z' + 'A' - 1 : s[i] += n);
	
        else if(s[i] >= 'a' && s[i] <= 'z')	answer.push_back(s[i]+n > 'z' ? s[i] += n - 'z' + 'a' - 1 : s[i] += n);
        
        else
            answer.push_back(' ');
    }
    return answer;
}
