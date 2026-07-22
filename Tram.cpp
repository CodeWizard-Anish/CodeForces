#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int leave, enter;
        cin >> leave >> enter;

        current -= leave;
        current += enter;

        ans = max(ans, current);
    }

    cout << ans << endl;

    return 0;
}