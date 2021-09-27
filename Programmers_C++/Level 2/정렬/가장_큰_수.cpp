#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int cmp(const void* a, const void* b){
    if(*(int*)a > *(int*)b)
        return -1;
    else if(*(int*)a < *(int*)b)
        return 1;
    else
        return 0;
}

string solution(vector<int> numbers) {
    string answer = "";
    
    qsort(numbers, numbers.size(), sizeof(int), cmp);
    
    for(int i=0; i<numbers.size(); i++){
        answer += numbers[i];
    }
    return answer;
}
