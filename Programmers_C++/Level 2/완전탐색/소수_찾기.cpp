/*#include <string>
#include <vector>

using namespace std;

int find_demical(int n){
    bool flag = false;
    for(int i=2; i<=n; i++){
        if(n % i == 0){
            flag = true;
         	break;   
        }
    }
    
    if(flag)
        return 1;
    
    else
        return 0;
    
}

int solution(string numbers) {
    int answer = 0;
    
    return answer;
}*/
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int find_demical(int n){
    bool flag = false;
    for(int i=2; i<=n; i++){
        if(n % i == 0 && i != n){
            flag = true;
         	break;
        }
    }

    if(flag)
        return 0;

    else
        return 1;

}
int main(void){
	int n;
	while(1){
		cin >> n;
		
		if(n == 0)
			break;
		
		else
			cout << find_demical(n) << endl;
	}
	return 0;
}
