#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int tmp = 0, clon = x;
    
    for(int i=0; i<6; i++){
        if(clon == 0) break;
        tmp += clon % 10;
		clon /= 10;    
    }
    
    if(x % tmp == 0) return true;
    
    else return false;
}
