#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    if (cin >> n) {
        if (n % 4 == 0) {
            cout << n + 1 << endl;
        } 
        else {
            cout << n - 1 << endl;
        }
    }
    return 0;
}
