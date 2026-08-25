#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    
    if(s[0] == 'S' && s[n-1] == 'F'){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}