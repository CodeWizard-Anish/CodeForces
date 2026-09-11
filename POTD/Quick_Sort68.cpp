#include<iostream>
#include<vector>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    
    int val = 1, cnt = 0;
    
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        
        if(x == val)
        {
            val ++;
            cnt ++;
        }
    }
    
    int rem = n - cnt;
    int ans = rem/k;
    
    if(rem % k != 0)
        ans ++;
        
    cout << ans << endl;
}

int main() {
    // your code goes here
    int t;
    cin >> t;
    
    while(t--)
        solve();
}