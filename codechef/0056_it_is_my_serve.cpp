#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int p, q;
	    cin >> p >> q;
	    int total_points = p+q;
	    if(total_points % 4 == 0 || total_points % 4 == 1) {
	        cout << "ALICE" << endl;
	    }
	    else {
	        cout << "BOB" << endl;
	    }
	}
    return 0;
}
