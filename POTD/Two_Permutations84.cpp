#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    if ((a == n && b == n) || (n - a - b >= 2)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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