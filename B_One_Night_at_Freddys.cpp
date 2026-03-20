#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n, m, l;
    cin >> n >> m >> l;

    vector<ll> a(n + 1);
    for(int i = 1 ; i <= n ; ++i) cin >> a[i];
    a[0] = 0;

    multiset<ll> s;
    for(int i = 0 ; i < min(m, n + 1) ; ++i) s.insert(0);

    int mx = n + 1;

    for(int i = 1 ; i <= n ; ++i){
        mx--;
        for(int j = a[i - 1] ; j < a[i] ; ++j){
            s.insert((*s.begin()) + 1);
            s.erase(s.begin());
        }
        s.erase(--s.end());

        if(s.size() < min(mx, m)) s.insert(0);
    }

    ll ans = *(--s.end()) + l - a[n];
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