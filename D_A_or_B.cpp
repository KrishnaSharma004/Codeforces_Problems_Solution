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
#define mpii map<int, int> 
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
ll get(vector<int> &a){
    if(a.empty()) return 0;

    int pos = (int)a.size() / 2; 
    ll val = 0;
    for(int i = 0 ; i < a.size() ; ++i){
        val += abs(a[pos] - a[i]) - abs(pos - i);
    }
    return val;
}
void solve(){
    int n;
    cin >> n;
    vector<int> a, b;
    for(int i = 0 ; i < n ; ++i){
        char c;
        cin >> c;

        if(c == 'a') a.pb(i);
        else b.pb(i);
    }
    cout << min(get(a), get(b)) << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
