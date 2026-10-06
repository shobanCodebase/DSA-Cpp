#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int mutated_count = 0;
        
        for(int i = 0; i < n; i++) {
            int initial_value;
            cin >> initial_value; 
            
            if ((initial_value + k) % 7 == 0) {
                mutated_count++;
            }
        }
        
        cout << mutated_count << "\n";
    }
    return 0;
}
