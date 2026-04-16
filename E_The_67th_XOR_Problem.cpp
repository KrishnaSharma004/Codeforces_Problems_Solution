#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;
// TLE : 
void solve2(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;
    int ans = 0;
    for(int i = 0; i < n ; ++i){
        int mx = a[i];
        vector<ll> temp(all(a));
        for(int t = 0; t < n ; ++t){
            ll chng = 0;
            for(int j = 0; j < n ; ++j){
                temp[j] ^= mx;
                chng = max(chng, temp[j]);
            }
            mx = chng;
        }
        ans = max(mx, ans);
    }
    cout << ans << '\n';
}
void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;
    ll ans = 0;
    for(int i = 0; i < n ; ++i){
        for(int j = 0; j < n ; ++j){
            ans = max(ans, a[j]^a[i]);
        }
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
