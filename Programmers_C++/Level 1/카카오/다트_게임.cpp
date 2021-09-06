#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

string s;

int func_S(int a, int i){
    if(s[i + 1] == '*'){
        a *= 2;
        if(s[i + 2] == '*')
            a *= 2;
        else if(s[i + 2] == '#')
            a *= -1;
    }
    
    else if(s[i + 1] == '#'){
        a *= -1;
        if(s[i + 2] == '*')
            a *= 2;
    }
    return a;
}

int func_D(int a, int i){
    a = pow(a, 2);
    if(s[i + 1] == '*'){
        a *= 2;
        if(s[i + 2] == '*')
            a *= 2;
        else if(s[i + 2] == '#')
            a *= -1;
    }
    
    else if(s[i + 1] == '#'){
        a *= -1;
        if(s[i + 2] == '*')
            a *= 2;
    }
    return a;
}

int func_T(int a, int i){
    a = pow(a,3);
    if(s[i + 1] == '*'){
        a *= 2;
        if(s[i + 2] == '*')
            a *= 2;
        else if(s[i + 2] == '#')
            a *= -1;
    }
    
    else if(s[i + 1] == '#'){
        a *= -1;
        if(s[i + 2] == '*')
            a *= 2;
    }
    return a;
}

int solution(string dartResult) {
    
    s = dartResult;
    
    int answer = 0, tmp, size = dartResult.size();
    
    for(int i=0; i<size; i++){
        
        if(dartResult[i] == 'S'){
            
            tmp = dartResult[i-1] - '0';
            
            if(!isdigit(dartResult[i - 2])) answer += func_S(tmp, i);
            
            else answer += func_S(10, i);
        }
        
        else if(dartResult[i] == 'D'){
            tmp = dartResult[i-1] - '0';
            
            if(!isdigit(dartResult[i - 2])) answer += func_D(tmp, i);
            
            else answer += func_D(10, i);
        }
        
        else if(dartResult[i] == 'T'){
            tmp = dartResult[i-1] - '0';
            
            if(!isdigit(dartResult[i - 2])) answer += func_T(tmp, i);
            
            else answer += func_T(10, i);
        }
		cout << answer << endl;
    }
    return answer;
}

int main(void){
	
	cin >> s;
	cout << solution(s) << endl;
	
	return 0;
}
