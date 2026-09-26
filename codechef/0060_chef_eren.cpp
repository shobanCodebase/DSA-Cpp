#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, a, b;
	    cin >> n >> a >> b; 
	    int even_episodes = n / 2;
        int odd_episodes = n - even_episodes;
        
        int total_duration = (even_episodes * a) + (odd_episodes * b);
        
        cout << total_duration << endl;
	}
    return 0;
}
