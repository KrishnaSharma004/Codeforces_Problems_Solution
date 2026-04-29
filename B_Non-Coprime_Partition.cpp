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
    int n;
    cin >> n;
    if(1 == n || 2 == n){
        cout << "No" << '\n';
    }else{
        cout << "Yes" << '\n';
        if(n&1){
            cout << ceil(n/2.0) << " ";
        }else{
            cout << n/2 << " ";
        }
        for(int i = 1 ; i <= n ; i += 2) cout << i << " ";
        cout << '\n';
        cout << n/2 << " ";
        for(int i = 2 ; i <= n ; i += 2) cout << i << " ";
        cout << '\n';
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
