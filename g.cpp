#include<bits/stdc++.h>
using namespace std;

#define ll long long

// G. Orray

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    int cur_or = 0;
    vector<bool> vis(n, false);
    for(int i = 0; i < min(31, n); ++i) {
        int mx = 0, idx = -1;
        for(int j = 0; j < n; ++j) {
            if(vis[j]) continue;
            if((cur_or | a[j]) > mx) {
                mx = (cur_or | a[j]);
                idx = j;
            }
        }
        vis[idx] = true;
        cout << a[idx] << " ";
        cur_or |= a[idx];
    }

    for(int i = 0; i < n; i++) 
        if(!vis[i]) cout << a[i] << " ";
    cout << '\n';
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
