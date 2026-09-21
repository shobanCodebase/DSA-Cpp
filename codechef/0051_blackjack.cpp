#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b;
	    cin >> a >> b;
	    int needed_number = 21 - (a+b);
	    
	    if(needed_number <= 10){
	        cout << needed_number << endl;
	    }
	    else{
	        cout << "-1" << endl;
	    }
	}
    return 0;
}
