#include<bits/stdc++.h>
using namespace std;

#define ll long long

// E. Scuza

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n), ps(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i) ps[i] = a[i] + ps[i-1];
        else ps[i] = a[i];
    }

    // 1 2 1 5
    // 1 
    // 1 2 4 9 10
    // 1 

    while(q--) {
        int k;
        cin >> k;


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
