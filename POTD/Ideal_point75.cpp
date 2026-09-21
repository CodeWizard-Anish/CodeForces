#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,k;
        cin>>n>>k;
        bool left = false;
        bool right = false;
        while(n--) {
            int l, r;
            cin >> l >> r;
            if(l == k) left = true;
            if(r == k) right = true;
        }
        string ans = (left && right) ? "YES" : "NO"; cout<<ans<<'\n';
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