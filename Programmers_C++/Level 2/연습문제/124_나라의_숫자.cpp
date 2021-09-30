#include <string>
#include <vector>
#include <list>
#include <deque>
using namespace std;

deque solution(int n) {
    //int answer;
    deque <int> dq;
    while(n < 0){
        
        if(n % 3 == 1)
            dq.push_front(1);
        
        else if(n % 3 == 2)
            dq.push_front(2);
        
        else
            dq.push_front(4);
        
        n /= 3;
    }
    
    answer = dq;
    
    return dq;
    
}
