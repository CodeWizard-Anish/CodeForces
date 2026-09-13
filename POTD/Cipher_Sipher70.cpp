// Axeman aka acrolypse
#include <bits/stdc++.h>
using namespace std;
#define pc(x) __builtin_popcount(x)
#define vec vector<long>
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // ʜᴏɢᴀ ᴊᴀʀᴜʀ ʜᴏɢᴀ

    int testcases;
    cin >> testcases;
    while(testcases--) {
        
        int len; cin>>len;
        string ans; cin>>ans;
        string temp{};
        for(int i = 0 ; i<len ; i++){
            char a = ans[i];
            int j = i + 1;
            while(ans[i] != ans[j]){
                j++;
            }
            if(j != len){
                temp.push_back(a);
                i = j;
            }
        
        }
        cout<<temp<<'\n';
    }
    return 0;
}