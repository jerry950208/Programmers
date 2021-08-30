#include <string>
#include <vector>
#include <algorithm>	//*min_element
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(arr.size() == 1) answer.push_back(-1);
    
    else{
    	for(int i=0; i<arr.size(); i++) 
            if(arr[i] != *min_element(arr.begin(), arr.end()))//벡터 원소 중, 최솟값을 찾아주는 함수
                answer.push_back(arr[i]);
    }
    return answer;
}

/*
#include <string>
#include <vector>
#include <algorithm>	//min_element
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if(arr.size() == 1) answer.push_back(-1);

    else {
        arr.erase(min_element(arr.begin(), arr.end()));//최솟값이 들어있는 인덱스를 지워준다
    	answer.swap(arr);//answer함수와 arr함수를 스왑해준다
    }
	return answer;
}
*/
