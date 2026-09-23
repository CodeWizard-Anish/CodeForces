#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int l = 0, r = s.size() - 1;

    while (l < r) {
        if (s[l] != s[r])
            return false;

        l++;
        r--;
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> v(2 * n - 2);

        for (auto &x : v)
            cin >> x;

        sort(v.begin(), v.end(), [](string &a, string &b) {
            return a.size() < b.size();
        });

        string a = v[v.size() - 1];
        string b = v[v.size() - 2];

        reverse(b.begin(), b.end());

        if (a == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}