#include <iostream>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s = "";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            s += char('a' + j);
        }
    }

    cout << s << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}