#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int tmp;
    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr2.size(); j++){
            tmp = arr1[i][j] * arr2[j][i];
            answer[i].push_back(tmp);
        }
    }
    return answer;
}

int main(void){
	
	vector<vector<int> > arr1;
	vector<vector<int> > arr2;
	vector<int> v;
	int tmp1, tmp2;
	
	
	return 0;
}
