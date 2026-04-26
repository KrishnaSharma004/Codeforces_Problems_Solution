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
void solve(){
    int d, sum;
    cin >> d >> sum;
    int mn_sm = 0;
    int cn_mk = 0;
    vector<int> mn(d), mx(d);
    for(int i = 0 ; i < d ; ++i){
        cin >> mn[i] >> mx[i];
        mn_sm += mn[i];
        cn_mk += mx[i] - mn[i];
    }
    if(mn_sm + cn_mk < sum || sum < mn_sm){
        cout << "NO" << '\n';
    }else{
        cout << "YES" << '\n';
        vector<int> ans(d, 0);
        for(int i = 0 ; i < d ; ++i){
            ans[i] = mn[i];
            sum -= mn[i];
        }
        for(int i = 0 ; i < d ; ++i){
            ans[i] += min(sum, mx[i] - mn[i]);
            sum -= min(sum, mx[i] - mn[i]);
        }
        for(auto &i : ans) cout << i << " ";
        cout << '\n';
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
