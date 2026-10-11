#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int starters_count = 0;
	    int ltime_count = 0;
	    
	    for (int i = 0; i < n; i++) {
	        string contest_code;
	        cin >> contest_code;
	        
	        if (contest_code == "START38") {
	            starters_count++;
	        } else if (contest_code == "LTIME108") {
	            ltime_count++;
	        }
	    }
	    
	    cout << starters_count << " " << ltime_count << "\n";
	}
    return 0;
}
