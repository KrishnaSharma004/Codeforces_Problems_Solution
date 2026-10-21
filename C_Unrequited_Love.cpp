#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;
    map<ll,ll> a1,a2;
    ll ans = 0;
    for(int i = 0 ; i < n - 4 ; ++i){
        ll love = a[i] + a[i+2] - a[i+4];
        if(1&i){
            ans += a1[love];
            if(i-2 >= 1 && a[i-2] + a[i] - a[i+2] == love){
                ans--;
            }
            if(i-4 >= 1 && a[i-4] + a[i-2] - a[i] == love){
                ans--;
            }
            a1[love]++;
        }
        else{
            if(i-2 >= 0 && a[i-2] + a[i] - a[i+2] == love){
                ans--;
            }
            if(i-4 >= 0 && a[i-4] + a[i-2] - a[i] == love){
                ans--;
            }
            ans += a2[love];
            a2[love]++;
        }
    }
    for(auto &i : a2){
        ll a1value = a1[i.first];
        ans += i.second*a1value;
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
