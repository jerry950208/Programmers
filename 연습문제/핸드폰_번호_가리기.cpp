#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int len = phone_number.length();
    for(int i=0; i<len-4; i++) phone_number[i] = '*';
    string answer = phone_number;
    return answer;
}
