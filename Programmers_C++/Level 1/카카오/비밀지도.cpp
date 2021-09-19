#include <string>
#include <vector>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2){

	vector<string> answer(n);
	for(int i=0; i<n; i++){
		int k = arr1[i] | arr2[i];
		answer[i].assign(" ", n);
		for(int j=n-1; j>=0; j--){
			if(k % 2 == 0) answer[i][j] = ' ';
			else answer[i][j] = '#';
			k /= 2;
		}
	}
	return answer;
}
/*
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int binary_num(int n){
	
	int output = 0;
	
	for(int i=1; n>0; i*=10){
		int binary = n % 2;
		output += binary * i;
		n /= 2;
	}

	return output;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
	int tmp;
	
	for(int i=0; i<n; i++){
		tmp = binary_num(arr1[i]) + binary_num(arr2[i]);
		for(int j=n; j>=1; j++){
			if(tmp / pow(10, j) == 0){
				answeri[i] += ' ';
				tmp %= pow(10, j);
			}

			else{
				answer[i] += '#';
				tmp %= pow(10, j);
			}
		}
	}

    return answer;
}*/
