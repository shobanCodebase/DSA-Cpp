#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if (x % 5 != 0) {
            cout << -1 << "\n";
        } 
        else {
            int coins_of_10 = x / 10;
            int coins_of_5 = (x % 10) / 5;
            
            cout << coins_of_10 + coins_of_5 << "\n";
        }
    }
    return 0;
}
