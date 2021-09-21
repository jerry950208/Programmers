#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0, flag = 0;
    for(int i=left; i<=right; i++){
        for(int j=1; j<=i; j++){
        	if(i % j == 0)
                flag++;
        }
        if(flag % 2 == 0)
            answer += i;
        else
            answer -= i;
        flag = 0;
    }
    return answer;
}

/*
//다른사람풀이
int sign(int n, int cnt=1){
	for(int i=1, last=n >> 1; i<=last; ++i)
		if(n % i == 0)
			++cnt;
			
	return cnt & 1 ? -1 : 1;
}

int solution(int a, int b){
	return a > b ? 0 : sign(a) * a + solution(a + 1, b);
}
*/
