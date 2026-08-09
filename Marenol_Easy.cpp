#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int onesA = 0, evenA = 0;
        int onesB = 0, evenB = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                onesA++;

                if (i % 2 == 0)
                    evenA++;
            }

            if (b[i] == '1') {
                onesB++;

                if (i % 2 == 0)
                    evenB++;
            }
        }

        if (onesA == onesB && evenA == evenB)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}