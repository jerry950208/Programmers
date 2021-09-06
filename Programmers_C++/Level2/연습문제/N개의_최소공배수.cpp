#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> arr) {
    int answer = 0, cnt = 1, flag;
    //sort(arr.begin(), arr.end());
    
    while(1){
        flag = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[arr.size() - 1] * cnt % arr[i] == 0){
                flag++;
                if(flag == arr.size()){
                	answer = arr[arr.size() - 1] * cnt;
                	return answer;
                }
            }
                
        }
        cnt++;
    }
}

//---------------------------------------------------------
//다른사람 풀이 (함수사용으로 편의성)
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int x, int y){
	return x % y == 0 ? y : gcd(y,x % y);
}

int lcm(int x, int y){
	return x % y / gcd(x, y);
}

int solution(vector<int> arr){
	
	int answer = arr[0];

	for(int i=1; i<arr.size(); i++)
		
		answer = lcm(answer, arr[i]);

	return answer;
}
