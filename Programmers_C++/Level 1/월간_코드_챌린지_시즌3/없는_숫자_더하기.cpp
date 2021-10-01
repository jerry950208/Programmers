#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    
    for(int i=0; i<numbers.size(); i++)
        answer -= numbers[i];
    
    return answer;
}

/*
	//다른사람 풀이

	#include <bits/stdc++.h>		
	//표준 라이브러리가 아니라서 파일을 따로 추가해야 사용할 수 있다.
	//자주 사용하는 헤더를 일일이 추가하는 번거로움을 없앨 수 있다.
	//자주 사용하는 라이브러리를 전부 컴파일 함으로써, 불필요한 라이브러리들도 컴파일 되어서 시간, 공간이 낭비된다.

	using namespace std;

	int solution(vector<int> numbers){
		return 45 - accumulate(numbers.begin(), numbers.end(), 0);
		
		//accumulate 함수
		//헤더는 #include <numeric>
		//첫번째 두번째 인자는 first, last iterator이고, 초기값 이다

		//초기값의 범위를 생각해서 int 형이나 long, long long 형에 맞게 써줘야한다
		//ex
		//vector<long long> v2{ 1'000'000'000, 2'000'000'000, 3'000'000'000, 4'000'000'000 };
		//cout << accumulate(v2.begin(), v2.end(), 0) << endl;		-> 쓰레기값 출력
		//cout << accumulate(v2.begin(), v2.end(), 0LL) << endl;	-> 정상출력
	}
*/
