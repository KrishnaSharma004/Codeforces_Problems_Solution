#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0;
    ll x = 0;
    int y = 0;
    for(int i = 0 ; i < n ; ++i){
        if(s[i] == '1') x++;
        if(s[i] == '0' && x != 0) ans += x+1;
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
