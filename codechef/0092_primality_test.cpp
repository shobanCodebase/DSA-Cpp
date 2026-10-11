#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n; 
	    cin >> n;
        bool is_prime = true;
	    
	    if (n <= 1) {
	        is_prime = false;
	    } else {
	        for (int i = 2; i * i <= n; i++) {
	            if (n % i == 0) {
	                is_prime = false;
	                break;
	            }
	        }
	    }
	    
	    if (is_prime) {
	        cout << "yes\n";
	    } else {
	        cout << "no\n";
	    }
	}
	return 0;
}
