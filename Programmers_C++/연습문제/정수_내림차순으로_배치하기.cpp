#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long solution(long long n){
        long long answer = 0;
        vector <long long> v;

        while(n != 0){
                v.push_back(n % 10);
                n /= 10;
        }

        sort(v.begin(), v.end());
		
    	for(int i=0; i<v.size(); i++) answer += v[i] * pow(10,i+1);
   
        return answer / 10;
}

// 처음 알게된 함수 to_strin, stollg
#include <string> 				// to_string
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    string str = to_string(n);	//숫자타입의 데이터를 안전하게 스트링 타입으로 변경하도록 하는 함수
    sort(str.begin(), str.end(), greater<char>());
    answer = stoll(str);	// 정수로 리턴해준다
	// stoi : int
	// stol : long
	// stoll : long long
    return answer;
}
