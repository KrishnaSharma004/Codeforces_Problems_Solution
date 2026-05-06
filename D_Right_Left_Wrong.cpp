#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pp pop_back
#define all(x) x.begin(), x.end()
#define vi vector<int> 
#define vll vector<ll> 
#define si set<int> 
#define sch set<char> 
#define sll set<ll> 
#define mpii map<int, int> 
#define mpll map<ll, ll> 
#define mpli map<ll, int> 
#define mpil map<int, ll> 
#define vpii vector<pair<int, int>>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define floopinc(i,x,y) for(int i = x; i < y ; ++i)
#define floopdec(i,x,y) for(int i = x; i >= y ; --i)
#define fauto(i,x) for(auto &i : x)
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
void krishna(){
    int n;
    cin >> n;
    vi a(n);
    fauto(i,a) cin >> i;
    string s1;
    cin >> s1;
    vll pf(n);
    pf[0] = a[0];
    floopinc(i,1,n){
        pf[i] = pf[i-1]+a[i];
    }
    int l = 0;
    int r = n-1;
    ll ans = 0;
    while(l<r){
        if(s1[l]=='L' && s1[r] == 'R'){
            ans += pf[r] - (l == 0 ? 0 : pf[l-1]);
            l++;
            r--;
        }
        if(s1[l]=='R') l++;
        if(s1[r]=='L') r--;
    }
    cout << ans << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)  krishna();
    return 0;
}
