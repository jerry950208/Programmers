#include <string>
#include <vector>
using namespace std;


int func(int n){
    if(n == 6) return 1;
    else if(n == 5) return 2;
    else if(n == 4) return 3;
    else if(n == 3) return 4;
    else if(n == 2) return 5;
    else return 6;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int cnt = 0;
    int win = 0;
    
    for(int i=0; i<lottos.size(); i++){
		
        if(lottos[i] == 0)
            cnt++;
        
        for(int j=0; j<win_nums.size(); j++){
            if(lottos[i] == win_nums[j]){
                win++;
                break;
            }
        }
    }
    
    answer.push_back(func(cnt+win));
    answer.push_back(func(win));
    /*
    if(cnt+win == 6)
        answer.push_back(1);
    else if(cnt+win == 0)
        answer.push_back(6);
    else
        answer.push_back(7-(cnt+win));
    
    if(win == 0)
        answer.push_back(6);
    else if(win == 6)
        answer.push_back(1);
    else
        answer.push_back(7-win);
    //answer.push_back(7-(cnt+win));
    //answer.push_back(7-win);   
	*/
    return answer;
}
