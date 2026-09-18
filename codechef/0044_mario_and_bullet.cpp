#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y, z;
	    cin >> x >> y >> z;
	    int travel_time = y/x;
	    int wait_time = max(0, z - travel_time);
        cout << wait_time << endl;
	}
    return 0;
}
