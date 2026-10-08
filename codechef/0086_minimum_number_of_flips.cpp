#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int current_sum = 0;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            current_sum += val; 
        }
        
        if (n % 2 != 0) {
            cout << -1 << "\n";
        } 
        else {
            cout << abs(current_sum) / 2 << "\n";
        }
	}
    return 0;
}
