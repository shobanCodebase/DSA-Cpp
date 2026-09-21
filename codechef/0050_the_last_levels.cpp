#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y, z;
	    cin >> x >> y >> z;
	    int play_time = x * y;
	    int total_breaks = (x - 1) / 3;
        int break_time = total_breaks * z;
        cout << play_time + break_time << endl;
	}
    return 0;
}
