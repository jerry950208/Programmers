#include <iostream>
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

int main(void){
	
	int input;
	cin >> input;

	cout << binary_num(input) << endl;

	return 0;
}
