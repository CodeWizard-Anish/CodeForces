#include <iostream>
#include<set>
#include<vector>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    int xk, yk;
    cin >> xk >> yk;

    int xq, yq;
    cin >> xq >> yq;

    vector<vector<int>> moves= {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a},
    };

    set<vector<int>> king;
    set<vector<int>> queen;

    for(auto m: moves){
        king.insert({xk + m[0], yk + m[1]});
        queen.insert({xq + m[0], yq + m[1]});
    }

    int ans{};
    for(auto pos: king){
        if(queen.count(pos)){
            ans++;
        }
    }

    cout << ans << endl;

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