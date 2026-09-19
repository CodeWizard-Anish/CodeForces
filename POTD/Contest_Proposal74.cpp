#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int i = n - 1;
    int j = n - 1;
    int ans = 0;

    while (i >= 0) {
        if (a[i] <= b[j]) {
            // This element of a can stay.
            i--;
            j--;
        } else {
            // This element has to be removed/replaced.
            ans++;
            i--;
        }
    }

    cout << ans << '\n';
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