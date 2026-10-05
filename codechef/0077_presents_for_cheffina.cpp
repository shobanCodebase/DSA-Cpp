#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    long long free_gifts = n / 5;
        long long total_cost = n - free_gifts;
        cout << total_cost << endl;
	}
    return 0;
}
