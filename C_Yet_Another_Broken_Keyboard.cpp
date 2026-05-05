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
    int n, k;
    cin >> n >> k;
    string s1;
    cin >> s1;
    sch st;
    floopinc(i,0,k){
        char ch;
        cin >> ch;
        st.insert(ch);
    }
    vll idx;
    idx.pb(-1);
    floopinc(i,0,n){
        if(st.find(s1[i]) == st.end()){
            idx.pb(i);
        }
    }
    idx.pb(n);
    ll ans = 0;
    floopinc(i,0,idx.size()-1){
        ans += (abs(idx[i]-idx[i+1])*(abs(idx[i+1]-idx[i]) - 1))/2;
    }
    cout << ans << '\n';
}
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t = 1;
    while(t--)  krishna();
    return 0;
}
