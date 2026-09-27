#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long x, n;
        cin >> x >> n;
        
        long long current_capacity = 100 * x;
        
        if (current_capacity >= n) {
            cout << 0 << "\n";
        } else {
            long long remaining_passengers = n - current_capacity;
            // Ceiling division by 100
            long long planes_needed = (remaining_passengers + 99) / 100;
            cout << planes_needed << "\n";
        }
	}
    return 0;
}
