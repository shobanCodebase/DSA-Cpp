#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int s, x, y, z;
	    cin >> s >> x >> y >> z ;
	    int current_free = s - (x + y);
        
        if (current_free >= z) {
            cout << 0 << "\n";
        }
        else if (current_free + max(x, y) >= z) {
            cout << 1 << "\n";
        }
        else {
            cout << 2 << "\n";
        }
	}
    return 0;
}
