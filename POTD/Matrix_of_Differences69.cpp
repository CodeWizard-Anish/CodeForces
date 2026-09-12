#include<iostream>
#include<vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    vector<vector<int>> mat(n, vector<int> (n));
    
    int l = 1, r = n*n;
    
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < n; j++)
            {
                if((i + j) % 2 == 0)
                    mat[i][j] = l++;
                else
                    mat[i][j] = r--;
            }
        }
        else
        {
            for(int j = n - 1; j >= 0; j--)
            {
                if((i + j) % 2 == 0)
                    mat[i][j] = l++;
                else
                    mat[i][j] = r--;
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

int main() {
    // your code goes here
    int t;
    cin >> t;
    
    while(t--)
        solve();
}