#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    int x = abs(a - c);
	    int y = abs(b - d);
	    int z = max(x , y);
	    cout << z << endl;
	}
    return 0;
}
