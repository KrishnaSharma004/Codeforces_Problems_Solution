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
#define vpii vector<pair<int, int>>
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
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    mpii mp;
    for(auto &i : a){
        mp[i]++;
    }
    bool check = false;
    for(auto &i : mp){
        if(i.s%i.f != 0){
            check = true;
            break;
        }
    }
    if(check){
        cout << -1 << '\n';
    }
    else{
        vpii vp;
        vector<int> ans(n);
        for(int i = 0 ; i < n ; ++i){
            vp.pb({a[i], i});
        }
        sort(all(vp));
        int num = 1;
        int i = 0;
        while(i < n){
            for(int j = i ; j < i + vp[i].f ; ++j){
                ans[vp[j].s] = num;
            }
            i += vp[i].f;
            num++;
        }
        for(auto &i : ans) cout << i << " ";
        cout << '\n';
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
