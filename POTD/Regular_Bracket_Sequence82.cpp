#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // i opening brackets
        for (int j = 0; j < i; j++) {
            cout << '(';
        }

        // i closing brackets
        for (int j = 0; j < i; j++) {
            cout << ')';
        }

        // remaining pairs
        for (int j = i; j < n; j++) {
            cout << "()";
        }

        cout << '\n';
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