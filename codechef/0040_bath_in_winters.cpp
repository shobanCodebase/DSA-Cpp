#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y;
        cin >> x >> y;
        int water_per_person = 2 * y;
        int max_people = x / water_per_person;
        
        cout << max_people << endl;
	}
    return 0;
}
