#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, x, p;
	    cin >> n >> x >> p;
	    int total_score = (4 * x) - n;
        
        if (total_score >= p) {
            cout << "PASS" << endl;
        } else {
            cout << "FAIL" << endl;
        }
	}
return 0;
}
