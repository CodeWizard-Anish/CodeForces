#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll a, b;
    cin >> a >> b;

    ll diff = b - a;
    ll fact = 1;

    if (diff > 4) {
        cout << 0 << endl;
    }
    else {
        for (ll i = a + 1; i <= b; i++) {
            fact = (fact * i) % 10;
        }

        cout << fact << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}