#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        long long x, y;
        cin >> x >> y;
        
        long long ans = (y - 1) / x;
        cout << ans << "\n";
    }
    return 0;
}