#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int cnt = 0;

    int prev;
    cin >> prev;

    for(int i{1}; i < n; ++i){
        int curr;
        cin >> curr;
        bool same = (curr & 1) == (prev & 1);

        if(same) cnt++;

        prev = curr;
    }

    cout << cnt << endl;

}

int main() {


    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
 