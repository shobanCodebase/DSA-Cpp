#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;

    int cumulative_score1 = 0;
    int cumulative_score2 = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; i++) {
        int s1, s2;
        cin >> s1 >> s2;

        cumulative_score1 += s1;
        cumulative_score2 += s2;

        if (cumulative_score1 > cumulative_score2) {
            int current_lead = cumulative_score1 - cumulative_score2;
            if (current_lead > max_lead) {
                max_lead = current_lead;
                winner = 1;
            }
        } else {
            int current_lead = cumulative_score2 - cumulative_score1;
            if (current_lead > max_lead) {
                max_lead = current_lead;
                winner = 2;
            }
        }
    }

    cout << winner << " " << max_lead << "\n";

    return 0;

}
