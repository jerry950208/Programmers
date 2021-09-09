#include <string>
#include <vector>

using namespace std;

int countOne(int n){
    int ret = 0;
    
    for(int i=0; i<31; i++)
        if(n & 0x01<<i)		// 이진수 n의 자리마다 1을 검사하는 코드
            ret++;
    
    return ret;
}

int solution(int n) {
    int answer = countOne(n);
    
    while(1){
        n++;
        if(answer == countOne(n))
            return n;
    }
}

//----------------------------------------------간단한 코딩
#include <bitset>
using namespace std;

int solution(int n){
	
	int num = bitset<20>(n).count();

	while(bitset<20>(++n).count() != num);

	return n;
}
