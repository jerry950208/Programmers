#include <string>	//stoi, stof, stod
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    answer = stoi(s);	//stoi = 문자형을 정수형으로 변환
    return answer;
}

// stoi = string to int
// stof = string to float
// stol = string to long
// stod = string to double
