#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    ll n, p;
    cin >> n >> p;
    vector<pair<ll, ll> > b(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> b[i].second;
    }
    for(int i = 0 ; i < n ; ++i){
        cin >> b[i].first;
    }
    sort(all(b));
    ll ans = p;
    int rm = n-1;
    for(int i = 0; i < n ; ++i){
        if(b[i].first > p) break;
        if(rm - b[i].second <= 0){
            ans += rm*b[i].first;
            rm =0;
        }
        else{
            ans += b[i].second*b[i].first;
            rm -= b[i].second;
        }
    }
    cout << ans + rm*p << '\n';
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