#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n, m;
    cin >> n >> m;
    if(n < m)cout << -1 << '\n';
    else if((int)ceil(n/2.0) % m == 0) cout << ceil(n/2.0) << '\n';
    else cout << ceil(n/2.0) + m - (int)ceil(n/2.0) % m << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
