#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

string s;

int prise(int i, char c1, char c2){
	if(isdigit(c2)){
		if(c1 == '*') return i * 2;

		else if(c1 == '#') return -i;
	}

	else{
		
		if(c1 == '*'){
			if(c2 == '*') return i * 4;
			
			else if(c2 == '#') return -i * 2;
		}

		if(c1 == '#'){
			if(c2 == '*') return -i * 2;

		return -i;
		}
	}
}

int solution(string dartResult) {
    int answer = 0;
   	for(int i=0; i<dartResult.size(); i++){
		if(s[i] == 'S' || s[i] == 'D' || s[i] == 'T'){
			
			int tmp = stoi(s[i-1]);

			if(s[i] == 'S'){
				tmp = stoi(s[i-1]);
				if(!isdigit(s[i+1])) answer += prise(tmp, s[i+1], s[i+2]);

				else answer += tmp;
			}

			else if(s[i] == 'D'){
				s[i] = tmp * 2;

				if(!isdigit(s[i+1])) answer += prise(tmp, s[i+1], s[i+2]);

				else answer += tmp * 2;
			}

			else if(s[i] == 'T'){
				s[i] = tmp * 3;
				if(!isdigit(s[i+1])) answer += prise(tmp, s[i+1], s[i+2]);

				else answer += tmp * 3;
			}
		}
	}
	return answer;
}

int main(void){
	
	cin >> s;
	cout << solution(s);
	
	return 0;
}
