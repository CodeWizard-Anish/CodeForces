#include <bits/stdc++.h>
using namespace std;

string s;
int dp[5005][3];

int solve(int i, int state) {
    if (i == s.size())
        return 0;

    if (dp[i][state] != -1)
        return dp[i][state];

    char want = (state == 1 ? 'b' : 'a');

    // Stay in current state
    int ans = (s[i] == want) + solve(i + 1, state);

    // Move to next state
    if (state < 2) {
        char nextWant = (state == 0 ? 'b' : 'a');

        ans = max(ans,
                  (s[i] == nextWant)
                  + solve(i + 1, state + 1));
    }

    return dp[i][state] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s;

    memset(dp, -1, sizeof(dp));

    cout << solve(0, 0) << '\n';
}