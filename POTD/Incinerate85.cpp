#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    vector<ll> h(n), p(n);

    for(auto &x : h) cin >> x;
    for(auto &x : p) cin >> x;

    vector<pair<ll,ll>> monsters;

    for(int i = 0; i < n; i++) {
        monsters.push_back({p[i], h[i]});
    }

    sort(monsters.begin(), monsters.end());

    ll mx = *max_element(h.begin(), h.end());
    ll damage = 0;

    int i = 0;

    while(k > 0) {

        damage += k;

        if(damage >= mx) {
            cout << "YES\n";
            return;
        }

        while(i < n && monsters[i].second <= damage)
            i++;

        if(i == n) {
            cout << "YES\n";
            return;
        }

        k -= monsters[i].first;
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}