#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

#define ll long long

// E. Scuza

void solve() {
    int n, q;
    cin >> n >> q;
    vector<long long> pref;
    pref.push_back(0);
    vector<int> prefmax;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pref.push_back(pref.back() + x);

        if(i == 0) 
            prefmax.push_back(x);
        else 
            prefmax.push_back(max(prefmax.back(), x));
    }

    while(q--) {
        int k;
        cin >> k;
        int ind = upper_bound(prefmax.begin(), prefmax.end(), k) - prefmax.begin();
        cout << pref[ind] << " ";
    }
    cout << "\n";
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
