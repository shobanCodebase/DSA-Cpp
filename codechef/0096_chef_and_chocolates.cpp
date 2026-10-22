#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int total_money = (x * 5) + (y * 10);
        cout << total_money / z << "\n";
    }
    return 0;
}