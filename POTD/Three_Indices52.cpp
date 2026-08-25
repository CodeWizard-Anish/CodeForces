#include <iostream>
#include<vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for(int i = 0; i < n; i++)
        cin >> v[i];
        
    int mn = 0;
    
    for(int i = 1; i < n; i++)
    {
        if(v[i] < v[mn])
            mn = i;
        
        if(v[i] > v[mn])
        {
            for(int j = i + 1; j < n; j++)
            {
                if(v[i] > v[j])
                {
                    cout << "YES" << endl;
                    cout << mn + 1 << " " << i + 1 << " " << j + 1 << endl;
                    return;
                }
            }
        }
    }
    
    cout << "NO" << endl;
}

int main() {
    // your code goes here
    int t;
    cin >> t;
    
    while(t--)
        solve();
}