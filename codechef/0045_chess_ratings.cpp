#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    if (x>=y){
	        cout << 0 << endl;
	    }
	    else{
	        int points_needed = y - x;
	        int wins_needed = (points_needed + 7) / 8;
            cout << wins_needed << "\n";
	    }
	}
    return 0;
}
