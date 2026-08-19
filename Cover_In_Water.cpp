#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int dots = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.')
                dots++;

            if (i >= 2 && s[i] == '.' &&
                s[i - 1] == '.' &&
                s[i - 2] == '.') {
                dots = 2;
                break;
            }
        }

        cout << dots << '\n';
    }

    return 0;
}