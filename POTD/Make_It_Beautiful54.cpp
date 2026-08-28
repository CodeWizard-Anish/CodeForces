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

        sort(a.begin(), a.end());

        if (a[0] == a[n - 1]) {//to check similar values
            cout << "NO\n";
        } 
        else {
            cout << "YES\n";

            // Smallest first
            cout << a[0] << " ";

            // Remaining elements in descending order
            for (int i = n - 1; i >= 1; i--) {
                cout << a[i] << " ";
            }

            cout << '\n';
        }
    }

    return 0;
}