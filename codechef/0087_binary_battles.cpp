#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b; 
        
        int rounds = 0;
        while (n > 1) {
            rounds++;
            n /= 2;
        }
        
        int total_time = (rounds * a) + ((rounds - 1) * b);
        
        cout << total_time << "\n";
    }
    return 0;
}
