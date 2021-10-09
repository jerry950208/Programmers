#include <string>
#include <vector>
#include <iosteam>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n - lost.size();
    vector<int> own(n+1,1);
    int check[n+1];
    
    for(int i=0; i<n+1; i++)
        check[i] = 0;
        
    for(int i=0; i<lost.size(); i++){
        own[lost[i]] = 0;
     	check[lost[i]] = 1;
    }
    
    for(int i=0; i<reserve.size(); i++){
        if(check[reserve[i]] == 1)
            own[reserve[i]] = 1;
        else
        	own[reserve[i]] = 2;
        
    }
    
    for(int i=0; i<n; i++){
        if(own[i] == 0 && own[i-1] == 2){
            answer++;
            own[i] = 1;
            own[i-1] = 1;
        }
        
        else if(own[i] == 0 && own[i+1] == 2){
            answer++;
            own[i] = 1;
            own[i+1] = 1;
        }
		
        else
            continue;
    }
    return answer;
}

int main(void){
	
	vector<int> lost;
	vector<int> reserve;
	int n;

	cin >> n;
	lost.push_bakc(n);
	
	cin >> n;
	reserve.push_back(n);
	
}
