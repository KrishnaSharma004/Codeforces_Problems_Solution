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
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    bool cons = false;
    for(int i = 0 ; i < n - 1 ; ++i){
        if(a[i] == a[i + 1]){
            cons = true;
            break;
        }
    }
    mpli mp;
    //even -> + 
    // odd -> -
    ll sm = a[0];
    mp[a[0]]++;
    bool chk = false;
    for(int i = 1 ; i < n ; ++i){
        if(i&1){
            sm -= a[i];
            mp[sm]++;
        }
        else{
            sm += a[i];
            mp[sm]++;
        }
        if(mp[sm] == 2 || sm == 0){
            chk = true;
            break;
        } 
    }
    yn(cons || chk);
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
