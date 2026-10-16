#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;
    priority_queue<ll> pq; 
    if(m == 1){
        sort(all(a));
        cout << a.back() << '\n';
        return;
    }
    ll sum = 0;
    for(int i = 0 ; i < m - 1 ; ++i){
        pq.push(a[i]);
        sum += a[i];
    }
    ll ans = -INF;
    for(int i = m-1 ; i < n ; ++i){
        ll s = m*a[i];
        ans = max(ans, s-sum);
        if(pq.top() > a[i]){
            sum -= pq.top();
            pq.pop();
            pq.push(a[i]);
            sum += a[i];
        }
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
