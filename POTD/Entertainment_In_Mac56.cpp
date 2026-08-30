#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string rev = s;
        reverse(rev.begin(), rev.end());

        if (s < rev) {
            cout << s << endl;
        } 
        else if (s > rev) {
            cout << rev + s << endl;
        } 
        else {
            cout << s << endl;
        }
    }

    return 0;
}