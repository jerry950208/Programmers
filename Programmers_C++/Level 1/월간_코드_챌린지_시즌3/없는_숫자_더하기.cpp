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
	using namespace std;

	int solution(vector<int> numbers){
		return 45 - accumulate(numbers.begin(), numbers.end(), 0);
	}
*/
