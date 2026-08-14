#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int power = 1;
        int count = 0;

        // First find how many non-zero digits
        int temp = n;

        while (temp > 0) {
            if (temp % 10 != 0)
                count++;

            temp /= 10;
        }

        cout << count << '\n';

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0)
                cout << digit * power << " ";

            n /= 10;
            power *= 10;
        }

        cout << '\n';
    }

    return 0;
}