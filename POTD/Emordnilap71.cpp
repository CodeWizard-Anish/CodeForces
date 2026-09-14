#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;

ll factorial(int n){
    ll ans = 1;
    for(int i{1}; i <= n; ++i){
        ans *= i;
        ans %= MOD;
    }

    return ans;
}

void solve() {
    int n;
    cin >> n;

    ll ans = (ll) n * (n-1);
    ans %= MOD;

    ans = (ans % MOD * factorial(n) % MOD) % MOD;

    cout << ans << endl;


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