#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin() + 1, a.end());

    long long cur = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > cur) {
            cur = (cur + a[i] + 1) / 2;//or ceil
        }
    }

    cout << cur << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}