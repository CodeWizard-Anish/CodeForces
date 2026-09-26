#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> first(2 * n + 1, -1);

    int sum = 0;
    int ans = 0;

    // sum = 0 exists before the string starts
    first[n] = 0;

    for (int i = 0; i < n; i++) {

        if (s[i] == '1')
            sum++;
        else
            sum--;

        int idx = sum + n;

        if (first[idx] != -1) {
            ans = max(ans, i + 1 - first[idx]);
        } else {
            first[idx] = i + 1;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}