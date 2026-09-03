#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int even_count = 0;
	for (int i = 0; i< n; i++){
	    int weapons;
	    cin>> weapons;
	    if (weapons %2 ==0){
	        even_count++;
	    }
	}
	
	if (even_count > n - even_count){
	    cout << "READY FOR BATTLE" <<endl;
	}
	else {
	    cout << "NOT READY"<< endl;
	}
	return 0;
}
