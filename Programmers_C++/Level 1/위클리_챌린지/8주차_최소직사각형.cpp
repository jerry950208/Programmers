#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0, max = 0;
    
    for(int i=0; i<sizes.size(); i++){
        if(sizes[i][1] < sizes[i][0]){
            int tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }
        
        if(max < sizes[i][1])
            max = sizes[i][1];
        
    }
    sort(sizes.begin(), sizes.end());
    
    answer = max * sizes[sizes.size()-1][0];
    return answer;
}

/*
//다른사람의 풀이
#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int> > sizes){
	int answer = 0;

	int w=0, h = 0;
	for(int i=0; i<sizes.size(); i++){
		w = max(w, min(sizes[i][0], sizes[i][1]));
		h = max(h, max(sizes[i][0], sizes[i][1]));
	}

	answer = w * h;

	return answer;

}
*/
