#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Increasing

void solve() {
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        s.insert(x);
    }

    if((int)s.size() == n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
