#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        double x,n;
        cin>> n >> x;
        
        int min_sub = ceil(n*1.0/6);
        int min_total_cost = min_sub*x;
        cout<< min_total_cost << endl;
    }
    return 0;
}
