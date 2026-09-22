#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k, m;
	    cin >> n >> k >> m;
	    int bag_capacity = k * m;
	    int bags_needed = (n + bag_capacity - 1) / bag_capacity;
        cout << bags_needed << "\n";
	}
    return 0;
}
