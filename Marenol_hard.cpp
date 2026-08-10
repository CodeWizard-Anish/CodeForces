#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        vector<int> aEven, aOdd;
        vector<int> bEven, bOdd;

        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                if (i % 2 == 0)
                    aEven.push_back(i);
                else
                    aOdd.push_back(i);
            }

            if (b[i] == '1') {
                if (i % 2 == 0)
                    bEven.push_back(i);
                else
                    bOdd.push_back(i);
            }
        }

        if (aEven.size() != bEven.size() ||
            aOdd.size() != bOdd.size()) {
            cout << -1 << '\n';
            continue;
        }

        long long ans = 0;

        for (int i = 0; i < aEven.size(); i++)
            ans += abs(aEven[i] - bEven[i]) / 2;

        for (int i = 0; i < aOdd.size(); i++)
            ans += abs(aOdd[i] - bOdd[i]) / 2;

        cout << ans << '\n';
    }

    return 0;
}