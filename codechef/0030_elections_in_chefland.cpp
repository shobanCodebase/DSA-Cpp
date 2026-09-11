#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    int eligible_voters = 0;
	    for(int i = 0; i < n; i++) {
            int age;
            cin >> age;
            if (age >= x) {
                eligible_voters++;
            }
        }
        
        cout << eligible_voters << endl;
	}
    return 0;
}
