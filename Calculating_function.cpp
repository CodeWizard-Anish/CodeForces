#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long ans = 0;

    if (n % 2 == 0) {
        ans = n / 2;
    } else {
        ans = -(n + 1) / 2;
    }

    cout << ans;

    return 0;
}