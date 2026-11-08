#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n, x, y;
    cin >> n >> x >> y;
    ll ans = 0;
    map<pair<ll,ll>, ll> md_fr;
    for(int i = 0 ;i < n ; ++i){
        ll m;
        cin >> m;
        ans += md_fr[{(x-m%x)%x, m%y}];
        md_fr[{m%x, m%y}]++;
    }
    cout << ans << '\n';
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        //cout << "case : " << t << '\n';
        krishna();
    }
    return 0;
}
