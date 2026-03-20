#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    ll n, m;
    cin >> n >> m;

    vector<ll> a(m);
    for(auto &i : a) cin >> i;

    ll t_spent = a[0] - 1;
    for(int i = 1; i < m ; ++i){
        if(a[i] >= a[i - 1]){
            t_spent += a[i] - a[i - 1];
        }
        else{
            t_spent += (n + 1 - a[i - 1]) + (a[i] - 1);
        }
    }
    cout << t_spent << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}