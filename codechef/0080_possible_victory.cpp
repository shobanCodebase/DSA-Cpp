#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, o, c;
    if (cin >> r >> o >> c) {
        int remaining_overs = 20 - o;
        int max_future_runs = remaining_overs * 6 * 6; 
        
        int max_final_score = c + max_future_runs;
        
        if (max_final_score > r) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
