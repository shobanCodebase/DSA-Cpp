#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
    cin >> t; 
    while(t--) {
        int n;
        cin >> n; 
        
        int degree = 0;
        for (int i = 0; i < n; i++) {
            int coefficient;
            cin >> coefficient; 
            
            if (coefficient != 0) {
                degree = i;
            }
        }
        
        cout << degree << "\n";
    }
    return 0;
}
