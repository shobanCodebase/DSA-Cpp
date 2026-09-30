#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t; 
    while(t--) {
        int x, y;
        cin >> x >> y; 
        int score_a_first = (500 - (2 * x)) + (1000 - (4 * (x + y)));
        int score_b_first = (1000 - (4 * y)) + (500 - (2 * (x + y)));
        cout << max(score_a_first, score_b_first) << "\n";
    }
    return 0;
}
