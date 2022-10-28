#include<bits/stdc++.h>
using namespace std;

#define ll long long

// Stripes

void solve() {
    char mat[8][8];
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> mat[i][j];
        }
    }

    char ans = 'B';
    for(int i = 0; i < 8; i++) {
        int r = 0;
        for(int j = 0; j < 8; j++) {
            if(mat[i][j] == 'R')
                r++;
        }
        if(r == 8) {
            ans = 'R';
        }
    }

    cout << ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
