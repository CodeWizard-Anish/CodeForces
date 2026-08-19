#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,x;
    int gasStation;
    while(t--){
        int lastStation = 0;
        int maxDistance = 0;
        cin>>n>>x;
        for(int i = 0;i<n;i++){
            cin>>gasStation;
            int distance = gasStation - lastStation;
            maxDistance = max(maxDistance, distance);
            lastStation = gasStation;
        }
        if(lastStation < x){
            int finalDistance =2* (x - lastStation);
            maxDistance = max(maxDistance, finalDistance);
        }

        cout<<maxDistance<<"\n";
    }
    
}