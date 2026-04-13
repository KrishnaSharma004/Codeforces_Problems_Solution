#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    set<ll> sum;
    ll l = 0;
    for(int i =0; i < n ; ++i){
        l += a[i];
        sum.insert(l);
    }
    ll ans = 0;
    ll req = 0;
    for(int i = n - 1; i >= 0; --i){
        sum.erase(l);
        l -=a[i];
        req +=a[i]; 
        if(sum.count(req)) ans = max(ans, req);
    }
    cout << ans << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
