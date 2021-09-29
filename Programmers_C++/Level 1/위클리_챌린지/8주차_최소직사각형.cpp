#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0, max = 0;
    for(int i=0; i<sizes.size(); i++){
    	if(sizes[i][0] < sizes[i][1]){
            int tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }
        
        if(max < sizes[i][0])
            max = sizes[i][0];
    }
    
    sort(sizes.begin(), sizes.end());
    
    answer += max * sizes[0][0];
    
    return answer;
}
