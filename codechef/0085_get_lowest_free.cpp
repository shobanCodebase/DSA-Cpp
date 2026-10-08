#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t; 
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c; 
        
        int lowest_price = min(a, min(b, c));
        
        int final_bill = (a + b + c) - lowest_price;
        
        cout << final_bill << "\n";
    }
    return 0;
}
