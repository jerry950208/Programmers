#include <stirng>
#include <vector>
#include <algorithm>
using namespace std;

int K;

bool cmp(string a, string b){
	
	if(a[K] != b)
		return a[K] < b[K];
	
	return a < b;
}

vector<string> solution(vector<string> strings, int n){
	vector<string> answer;
	K = n;
	answer = strings;
	
	sort(answer.begin(), answer.end(), cmp);

	return answer;
	
}

//-------------------------------------------------------
//cmp 함수를 더 간단하게 짜는법
bool cmp(string a, string b){
	return a[K] == b[K] ? a < b : a[i] < b[i];
}
