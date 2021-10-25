#include <string>
#include <vector>
#include <cmath>
#include <cmath>
using namespace std;

int solution(string s) {
    int answer = 0;
    int cnt = 0;
    string num = "";
    
    for(int i=0; i<s.size(); i++){
        cnt++;
        if(!isdigit(s[i])){
            num += s[i];
         	if(num == "zero"){
                num = "";
                answer += pow(10, cnt) * 0;
            }
            else if(num == "one"){
                num = "";
                answer += pow(10, cnt) * 1;
            }
			else if(num == "two"){
                num = "";
                answer += pow(10, cnt) * 2;
            }
            else if(num == "three"){
                num = "";
                answer += pow(10, cnt) * 3;
            }            
            else if(num == "four"){
                num = "";
                answer += pow(10, cnt) * 4;
            }            
            else if(num == "five"){
                num = "";
                answer += pow(10, cnt) * 5;
            }            
            else if(num == "six"){
                num = "";
                answer += pow(10, cnt) * 6;
            }            
            else if(num == "seven"){
                num = "";
                answer += pow(10, cnt) * 7;
            }            
            else if(num == "eight"){
                num = "";
                answer += pow(10, cnt) * 8;
            }            
            else if(num == "nine"){
                num = "";
                answer += pow(10, cnt) * 9;
            }
            else
                answer += pow(10, cnt) * stoi(s[i]);
        }
    }
    
    return answer;
}
