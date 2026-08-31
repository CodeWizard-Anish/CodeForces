#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {
            a[i] -= c;
        }

        // The smaller half can be "saved" by pairing
        for (int i = 0; i < n / 2; i++) {
            a[i] = max(a[i], 0LL);
        }

        long long ans = 0;

        for (long long x : a) {
            ans += x;
        }

        cout << ans << '\n';
    }

    return 0;
}