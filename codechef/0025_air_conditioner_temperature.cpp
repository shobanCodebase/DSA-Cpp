#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, c;
	    cin >> a >> b >> c;
	    int min_required = max(a, c);
	    if (min_required <= b) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
	}
    return 0;
}
