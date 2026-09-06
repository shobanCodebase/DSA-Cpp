#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        if (x >= n){ 
            cout << 0 << endl;
        }
        else {
            int candies_needed = n - x;
            int packets_needed = (candies_needed + 3) / 4;
            cout << packets_needed << endl;
        }
    }
    return 0;
}