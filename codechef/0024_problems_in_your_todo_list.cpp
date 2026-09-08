#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int remove_count = 0;
	    
	    for(int i = 0; i < n; i++){
	        int rating;
	        cin >> rating;
	        
	        if (rating >= 1000) {
                remove_count++;
            }
	    }
	    cout << remove_count << endl; 
	}
    return 0;
}
