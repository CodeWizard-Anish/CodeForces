#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        int minDiff = 1e9;
        bool sorted = true;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                sorted = false;
                break;
            }

            minDiff = min(minDiff, a[i + 1] - a[i]);
        }

        if (!sorted)
            cout << 0 << '\n';
        else
            cout << minDiff / 2 + 1 << '\n';
    }

    return 0;
}