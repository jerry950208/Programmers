/*
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
}*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int sosu(int a){
    int cnt = 0;
    for(int i=2; i<=a; i++){
        if(a % i == 0)	cnt++;

        if(cnt > 1)
            break;
    }

    if(cnt > 1)
        return 0;
    else
        return 1;
}

int main(void){
	
	int a;
	cin >> a;

	for(int i=0; i<a; i++){
		int n;
		cin >> n;
		cout << sosu(n) << endl;
	}
	return 0;
}
