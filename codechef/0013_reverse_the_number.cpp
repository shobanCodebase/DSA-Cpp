#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>> t;
	while(t--){
	    int n;
	    cin>> n;
	    int reversed_num=0;
	    while(n>0){
	        int remainder = n%10;
	        reversed_num = (reversed_num*10)+ remainder ;
	        n/= 10;
	    }
	    cout << reversed_num << endl;
	}
    return 0;
}
