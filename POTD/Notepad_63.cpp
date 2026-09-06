#include<iostream>
#include<map>
using namespace std;

void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    map<string, int> mp;
        bool found = false;

        for (int i = 0; i < s.length() - 1; i++) {
            string sub = s.substr(i, 2);

            if (mp.count(sub)) {
                // Previous occurrence should not overlap
                if (i - mp[sub] >= 2) {
                    found = true;
                    break;
                }
            } else {
                mp[sub] = i;
            }
        }

        cout << (found ? "YES" : "NO") << '\n';
  }


int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}