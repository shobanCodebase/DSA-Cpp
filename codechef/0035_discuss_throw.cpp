#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, c;
	    cin >> a >> b >> c;
	    int best_throw = max(a, max(b, c));
        
        cout << best_throw << endl;
	}
    return 0;
}
