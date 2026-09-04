#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n % 2 !=0){
            for(int i =0;i<n;i++){
                cout<<n<<" "<<endl;;
            }
        }
        else{
            cout<<" 2 6 ";
            for(int i=0;i<n-2;i++){
                cout<<"4 ";
                
            }
        }
    }
    return 0;
}