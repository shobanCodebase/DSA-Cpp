#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	if (cin >> x >> y) {
        int fast_time = y / 2;
        int normal_time = x - y;
        
        int total_time = fast_time + normal_time;
        
        cout << total_time << endl;
    }
    return 0;
}
