#include <iostream>

#include <string>
#include <cmath>
using namespace std;

string s;
int answer, tmp;

int func_S(int i, int num){
	
	int score = num;
	
	if(s[i + 2] == '*'){
		score *= 2;
		if(s[i + 5] == '*' || s[i - 1] == '*')
			score *= 2;
	}

	else if(s[i + 2] == '#'){
		score *= -1;
		if(s[i + 5] == '*')
			score *= 2;
	}

	return score;
}

int func_D(int i, int num){
	
	int score = pow(num, 2);
	
	if(s[i + 2] == '*'){
		score *= 2;
		if(s[i + 5] == '*' || s[i - 1] == '*')
			score *= 2;
	}

	else if(s[i + 2] == '#'){
		score *= -1;
		if(s[i + 5] == '*')
			score *= 2;
	}

	return score;
}

int func_T(int i, int num){
	int score = pow(num, 3);

	if(s[i + 2] == '*'){
		score *= 2;
		if(s[i + 5] == '*' || s[i - 1] == '*')
			score *= 2;
	}

	else if(s[i + 2] == '#'){
		score *= -1;
		if(s[i + 5] == '*')
			score *= 2;
	}

	return score;
}

int solution(string dartResult) {
    
	s = dartResult;
	
	for(int i=0; i<dartResult.length(); i++){
		
		if(isdigit(dartResult[i])){
			
			if(!isdigit(dartResult[i + 1])){
				if(dartResult[i + 1] == 'S')
					answer += func_S(i, dartResult[i] - '0');

				else if(dartResult[i + 1] == 'D')
					answer += func_D(i, dartResult[i] - '0');
			
				else if(dartResult[i + 1] == 'T')
					answer += func_T(i, dartResult[i] - '0');
			}
			else{

				if(dartResult[i + 1] == 'S')
					answer += func_S(i, 10);

				else if(dartResult[i + 1] == 'D')
					answer += func_D(i, 10);
			
				else if(dartResult[i + 1] == 'T')
					answer += func_T(i, 10);
			}
		}
		cout << answer << endl;
	}
    return answer;
}
int main(void){
	string input;
	cin >> input;
	cout << solution(input) << endl;
	return 0;
}
