#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int X, Y, R;
    cin >> X >> Y >> R;
    int extra_sticks = R / 30;
    int total_sticks = X + extra_sticks;
    int total_plates = (total_sticks + Y - 1) / Y;
    cout << total_plates << "\n";
	}
    return 0;
}
