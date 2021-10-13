#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;
    int size = land.size();
    int tmp[4][size];
    
    for(int i=0; i<size; i++){
		tmp[0][i] = land[0][i];
        cout << tmp[0][i] << " ";
	}
	cout << endl;

    for(int i=1; i<3; i++){
        for(int j=0; j<size; j++){
            if(j == 0){
                tmp[i][j] = tmp[i-1][j] + land[i][j+1];
            	cout << tmp[i][j] << " ";
			}

            else if(j == size - 1){
                tmp[i][j] = tmp[i-1][j] + land[i][j-1];
            	cout << tmp[i][j] << " ";
			}

            else{
                tmp[i][j] = tmp[i-1][j] + max(land[i][j-1], land[i][j+1]);
        		cout << tmp[i][j] << " ";
			}
		}
		cout << endl;
    }
    
    for(int i=0; i<size; i++)
        if(answer < tmp[3][i])
            answer = tmp[3][i];
        //answer = max(answer, tmp[3][i]);
    
    return answer;
}

int main(void){
	
	vector<vector<int> > v;
	vector<int> tmp;
	int input;

	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			cin >> input;
			tmp.push_back(input);
		}
		v.push_back(tmp);
	}

	cout << solution(v) << endl;

	return 0;
}
