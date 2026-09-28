#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long a, x, b, y;
        cin >> a >> x >> b >> y; 
        
        long long alice_factor = a * y;
        long long bob_factor = b * x;
        
        if (alice_factor > bob_factor) {
            cout << "Alice"<<endl;
        } else if (bob_factor > alice_factor) {
            cout << "Bob"<< endl;
        } else {
            cout << "Equal"<< endl;
        }
	}
return 0;
}
