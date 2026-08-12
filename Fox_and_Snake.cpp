#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 1) {
            // Odd row: all #
            for (int j = 0; j < m; j++)
                cout << '#';
        }
        else {
            // Even row
            if (i % 4 == 2) {
                // # on right
                for (int j = 0; j < m - 1; j++)
                    cout << '.';
                cout << '#';
            }
            else {
                // # on left
                cout << '#';
                for (int j = 0; j < m - 1; j++)
                    cout << '.';
            }
        }

        cout << '\n';
    }

    return 0;
}