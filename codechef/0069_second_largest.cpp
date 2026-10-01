#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    int a,b,c;
	    cin >> a >> b >> c ;
	    int highest = max(a, max(b, c));
        int lowest = min(a, min(b, c));
        
        int second_largest = (a + b + c) - highest - lowest;
        
        cout << second_largest << "\n";
	}
    return 0;
}
