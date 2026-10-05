#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
        cin >> n;
        int a = 2; 
        int ans = 0;
        while (a <= n) {
            ans++;
            a += 7; 
        }
        
        cout << ans << "\n";
	}
    return 0;
}
