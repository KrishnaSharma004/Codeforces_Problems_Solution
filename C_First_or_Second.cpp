#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
#define vi vector<int> 
#define vll vector<ll> 
#define si set<int> 
#define sll set<ll> 
#define mpi map<int, int> 
#define mpll map<ll, ll> 
#define mpli map<ll, int> 
#define mpil map<int, ll> 
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
typedef long long ll;
void yn(bool condition){
    if(condition){
        yes;
    }else{
        no;
    }
}
void ny(bool condition) { yn(!condition);}

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}
void solve(){
    int n; cin >> n;
    vector<int> a(n); 
    for(auto& i : a) cin >> i;
    vector<ll> pf(n + 1), sf(n);
    for(int i = 1; i < n; i++) pf[i + 1] = pf[i] + abs(a[i]);
    for(int i = n - 1; i >= 1; i--) sf[i - 1] = sf[i] - a[i];
 
    ll ans = sf[0];
    for(int i = 1; i < n; i++) ans = max(ans, a[0] + pf[i] + sf[i]);
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
