#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    vector<int> b(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;

    for(int i = 0 ; i < n ; ++i)
        if(a[i] < b[i]) a[i] = b[i];
    for(int i = 0 ; i < n - 1 ; ++i)
        if(a[i] < a[i + 1]) a[i] = a[i + 1];
    for(int i = n - 1 ; i >= 1 ; --i){
        a[i - 1] = max(a[i] , a[i - 1]);
    }
    vector<ll> sf(all(a));
    for(int i = 1 ; i < n ; ++i){
        sf[i] = sf[i - 1] + sf[i];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        if(l != 1) cout << sf[r - 1] - sf[l - 2] << " ";
        else cout << sf[r - 1] << " ";
    }
    cout << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}