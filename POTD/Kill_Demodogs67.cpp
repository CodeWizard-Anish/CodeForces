#include<iostream>
#include<cstdint>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;

    int mod = 1e9 + 7;

    int ans = (n % mod);
    ans = (ans * (n + 1)) % mod;
    ans = (ans * (4*n - 1)) % mod;
    ans = (ans * 337) % mod;
    cout<<ans<<endl;
}
int32_t main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }

}