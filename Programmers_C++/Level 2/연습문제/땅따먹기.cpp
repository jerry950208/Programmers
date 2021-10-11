#include <iostream>
#include <vector>
using namespace std;
//Dp로 풀기
//tmp하나 만들고 -1, +1 을 비교후 큰 값을 tmp에 더해준다
//마지막에 가장 큰 값을 answer에 넣고 리턴해준다
int solution(vector<vector<int> > land)
{
    vector<vector<int> > tmp;
    int answer = 0;
    
	tmp[0] = land[0];
	for(int i=1; i<4; i++){
        for(int j=0; j<land.size(); j++){
            if(j == 0)
                tmp[i][j] = land[i-1][j+1];
            else if(land[i][j-1] < land[i][j+1])
                tmp[i][j] = land[i]
        }
    }
    return answer;
}
