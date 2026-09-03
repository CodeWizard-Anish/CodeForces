#include<iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int>a(n);
        vector<int>b(n);
        vector<int>c(n);
        
        for(int &x :a) cin>>x;
        for(int &x :b) cin>>x;
        for(int &x :c) cin>>x;
        
        long long goodAB=0;
        long long goodBC=0;
        
        for(int p = 0;p<n;p++){
            bool ok = true;
            for(int i=0;i<n;i++){
                if(a[i]>=b[(i+p) % n]){
                    ok = false;
                    break;
                }
            }
            if(ok) goodAB++;
        }
        for(int q = 0;q<n;q++){
            bool ok =true;
            for(int i = 0;i<n;i++){
                if(b[i]>=c[(i+q)%n]){
                    ok = false;
                    break;
                }
            }
            if(ok) goodBC++;
           
        }
         cout<<1LL*n*goodAB*goodBC<<'\n';
    }
}
