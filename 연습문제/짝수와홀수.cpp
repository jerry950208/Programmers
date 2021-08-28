#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer1 = "Odd";
    string answer2 = "Even";
    
    if(num % 2 == 0 || num == 0)
        return answer2;
    else
        return answer1;
}
