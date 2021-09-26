#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int max = 0; 
    int cnt = 0;
    
    while(cnt == numbers.size()){
        for(int i=0; i<numbers.size(); i++){
            if(max < numbers[i])
                max = numbers[i];
        }
        cnt++;
        answer = 10 + max;
    }
    return answer;
}
