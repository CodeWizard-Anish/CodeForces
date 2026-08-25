#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    int cnt = 0;
    
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        
        if(x == -1)
            cnt ++;
    }
    
    int k = (n/4) * 2;
    
    if(cnt >= k)
    {
        cout << cnt - k << endl;
        return;
    }
    
    if(cnt % 2)
        cout << "1" << endl;
    else
        cout << "0" << endl;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    
    while(t--)  
        solve();
}