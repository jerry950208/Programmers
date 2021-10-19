#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int sum = brown + yellow;
    
    for(int i=sum/2; i>0; i--){
		if(sum % i == 0){
            int a = i;
            int b = sum / i;
            
            if((a-2) * (b-2) == yellow){
                answer.push_back(a);
                answer.push_back(b);
                break;
            }
        }
    }
    return answer;
}

/*다른사람 풀이
#include <string>
#include <vector>
using namespace std;

vector<int> solution(int brown, int yellow){
	
	int len = brown / 2 + 2;
	int w = len - 3;
	int h = 3;

	while(w >= h){

		if(w * h == (brown + yellow)) break;

		w--;
		h++;
	}

	return vector<int>{w,h};
}
*/
