
/*
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
}*/
#include <string>
#include <vector>
using namespace std;

int cmp(int a, int b){
	
    if(a >= b)
        return a;
    
    else
        return b;
}

int solution(vector<vector<int> > land){
    int answer = 0;
    vector<vector<int> > tmp;
    int size = land.size();
    
  	tmp[0] = land[0];
    
    for(int i=1; i<size; i++){
        for(int j=0; j<size; j++){
            if(j == 0)
                tmp[i][j] = tmp[i-1][j] + land[i-1][j+1];
            
            else if(j == size - 1)
                tmp[i][j] = tmp[i-1][j] + land[i-1][j-1];
            
            else
                tmp[i][j] = tmp[i-1][j] + cmp(land[i][j-1], land[i][j+1]);
        }
    }
    
    for(int i=0; i<size; i++)
        if(answer < tmp[3][i])
            answer = tmp[3][i];
    
    return answer;
}
