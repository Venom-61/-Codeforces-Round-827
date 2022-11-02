#include<bits/stdc++.h>
using namespace std;

#define int long long

// F. Smaller

void solve() {
    int q;
    cin >> q;
    bool otherA = false, otherB = false;
    int cntA = 0, cntB = 0;
    while(q--) {
        int d, k;
        string s;
        cin >> d >> k >> s;

        for(auto& c : s) {
            if(d == 1) {
                if(c != 'a') otherA = true;
                else cntA += k;
            } else {
                if(c != 'a') otherB = true;
                else cntB += k;
            }
        }

        if(otherB) 
            cout << "YES\n";
        else if(!otherA and cntA < cntB) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        // cout << "Case: #" << i << " ";
        solve();
    }

    return 0;
}
