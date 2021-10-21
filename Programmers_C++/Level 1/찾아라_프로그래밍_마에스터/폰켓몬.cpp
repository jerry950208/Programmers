#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    bool flag[20001];
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
