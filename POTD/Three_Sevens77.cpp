#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m;
    cin >> m;

    vector<vector<int>> a(m);

    for (int i = 0; i < m; i++) {
        int n;
        cin >> n;

        a[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    vector<bool> used(50001, false);
    vector<int> ans(m);

    for (int i = m - 1; i >= 0; i--) {
        int winner = -1;

        for (int x : a[i]) {
            if (!used[x]) {
                winner = x;
                break;
            }
        }

        if (winner == -1) {
            cout << -1 << '\n';
            return;
        }

        ans[i] = winner;

        for (int x : a[i]) {
            used[x] = true;
        }
    }

    for (int x : ans) {
        cout << x << ' ';
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}