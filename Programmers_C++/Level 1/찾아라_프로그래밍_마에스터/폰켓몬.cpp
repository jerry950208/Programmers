
int solution(vector<int> nums)
{
    int answer = 0;
    bool flag[210000];
    int cnt = 0;
    for(int i=0; i<nums.size(); i++){
        if(flag[nums[i]] == false){
            cnt++;
            flag[nums[i]] = true;
        }
    }
    
    if(cnt < nums.size() / 2)
        answer = cnt;
    else
        answer = nums.size() / 2;
    return answer;
}

//다른사람들 풀이
/*
//unordered_map 따로 공부해보기
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums){
	
	unordered_map<int, int> hash;

	for(auto num: nums)
		hash[num] += 1;

		return min(hash.size(), nums.size()/2);
}
*/
