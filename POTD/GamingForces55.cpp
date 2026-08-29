#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int cnt{};

    for(int i{}; i < n; ++i){
        int num;
        cin >> num;

        if(num == 1) cnt++;
    }

    cout << n - cnt/2 << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}