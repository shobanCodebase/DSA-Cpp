#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int h, x, y;
        cin >> h >> x >> y; 
        
        if (y >= h) {
            cout << 1 << "\n";
        } 
        else {
            int remaining_health = h - y;
            
            int normal_attacks = (remaining_health + x - 1) / x;
            
            cout << 1 + normal_attacks << "\n";
    	}
    }
    return 0;
}
