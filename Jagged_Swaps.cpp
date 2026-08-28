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

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mn = *min_element(a.begin(), a.end());

        if (a[0] == mn)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}