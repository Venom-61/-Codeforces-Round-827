#include<bits/stdc++.h>
using namespace std;

#define ll long long

// Sum

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    bool ok = false;
    
    if(a == (b + c) or b == (a + c) or c == (b + a)) {
        ok = true;
    }

    ok ? cout << "YES\n" : cout << "NO\n";
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
