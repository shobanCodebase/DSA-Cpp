#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    int total_moves = (x / y) + (x % y);
        cout << total_moves << endl;
	}
    return 0;
}
