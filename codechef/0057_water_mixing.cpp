#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, x, y;
	    cin >> a >> b >> x >> y ;
	    if (a == b) {
            cout << "YES\n";
        } 
        else if (b > a) {
            if (b - a <= x) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } 
        else {
            if (a - b <= y) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
	}
    return 0;
}
