#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,k;
    int prev, curr;
    
    while(t--){
        bool sorted = true;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin >> curr;

            if(i > 0 && prev > curr)
                sorted = false;

            prev = curr;
        }
        if(k >= 2)
            cout << "YES\n";
        else if(sorted)
            cout << "YES\n";
        else
            cout << "NO\n";

        }
        return 0;
}
