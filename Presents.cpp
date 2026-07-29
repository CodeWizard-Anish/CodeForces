#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans[n + 1];

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        ans[x] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}