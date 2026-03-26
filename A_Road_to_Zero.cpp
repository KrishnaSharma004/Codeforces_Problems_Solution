#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    ll x, y, a, b;
    cin >> x  >> y;
    cin >> a >> b;
    ll case1 = a*x + a*y;
    cout << min(case1, abs(x - y)*a + min(x,y)*b) << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
