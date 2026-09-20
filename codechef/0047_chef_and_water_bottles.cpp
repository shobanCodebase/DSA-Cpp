#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, x, k;
	    cin >> n >> x >> k;
	    int bottles_from_tank = k/x;
	    int final_bottles = min(n, k/x);
	    cout << final_bottles << endl;
	}
    return 0;
}
