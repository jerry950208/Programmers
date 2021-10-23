#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> tmp;
    int day = 0;
    int cnt = 1;
    
    for(int i=0; i<progresses.size(); i++)
        tmp.push_back(100 - progresses[i]);
    
    for(int i=0; i<tmp.size(); i++){
        
        if(day < progresses[i]){
            answer.push_back(cnt);
        	while(1){
            	day++;
            	if(day == progresses[i]){
                    cnt = 1;
                    break;
                }
        	}
        }
        
        else
            cnt++;
    }
    return answer;
}
