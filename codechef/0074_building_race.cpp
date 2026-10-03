#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    long long a, b, x, y;
        cin >> a >> b >> x >> y;
        long long chef_factor = a * y;
        long long chefina_factor = b * x;
        
        if (chef_factor < chefina_factor) {
            cout << "Chef\n";
        } else if (chefina_factor < chef_factor) {
            cout << "Chefina\n";
        } else {
            cout << "Both\n";
        }
	}
    return 0;
}
