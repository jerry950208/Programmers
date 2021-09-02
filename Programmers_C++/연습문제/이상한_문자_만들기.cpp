#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int idx = 0;
    for(int i=0; i<s.size(); i++){
        
        if(s[i] == ' '){
            idx = 0;
            continue;
        }
        
        if(idx % 2 == 1) s[i] = tolower(s[i]); //tolower : 대문자만 소문자로 변환
        
        else s[i] = toupper(s[i]); // toupper : 소문자만 대문자로 변환
            
		idx++;
    }
    return s;
}
