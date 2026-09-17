#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, m;
        cin >> n >> m;
        int extra_left_shoes = max(0, n - m);
        
        int total_shoes_to_buy = n + extra_left_shoes;
        
        cout << total_shoes_to_buy << "\n";
	}
    return 0;
}
