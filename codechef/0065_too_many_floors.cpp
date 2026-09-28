#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    int chef_floor = (x + 9) / 10;
        int chefina_floor = (y + 9) / 10;
                cout << abs(chef_floor - chefina_floor) << "\n";
	}
    return 0;
}
