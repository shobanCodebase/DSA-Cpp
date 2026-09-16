#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, x;
        cin >> n >> x;
        int min_flips = min(x, n - x);
        
        cout << min_flips << endl;
	}
    return 0;
}
