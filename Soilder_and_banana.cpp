#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int total_cost = k*(w*(w+1))/2;
    int money_needed = max(0, total_cost - n);
    cout<<money_needed<<endl;

    return 0;
}