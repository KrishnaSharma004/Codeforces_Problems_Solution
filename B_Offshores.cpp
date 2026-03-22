#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;


void solve(){
    ll n, x, y;
    cin >> n >> x >> y;

    vector<ll> a(n);
    for(auto &i : a) cin >> i;

    ll sum = 0;
    for(int i = 0; i < n ; ++i){
        sum += a[i]/x;
    }
    
    ll ans = 0;
    for(int i = 0; i < n ; ++i){
        ans = max(ans, a[i] + y * (sum - a[i]/x));
    }
    cout << ans << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}