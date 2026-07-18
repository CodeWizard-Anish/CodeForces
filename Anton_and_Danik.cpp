#include<iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            count++;
        }
    }
    if(count>n-count){
        cout<<"Anton"<<endl;
    }
    else if(count<n-count){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}