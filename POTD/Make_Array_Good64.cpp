#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << n << '\n';

    for (int i = 0; i < n; i++) {

        long long power = 1;

        while (power < a[i]) {
            power *= 2;
        }

        long long x = power - a[i];

        cout << i + 1 << " " << x << '\n';
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}