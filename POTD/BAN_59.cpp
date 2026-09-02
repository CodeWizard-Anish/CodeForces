#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int operations = (n + 1) / 2;

        cout << operations << '\n';

        int left = 2;
        int right = 3 * n;

        while (left < right) {
            cout << left << " " << right << '\n';

            left += 3;
            right -= 3;
        }
    }

    return 0;
}