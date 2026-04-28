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
    string s;
    cin >> s;
    string sorted = s;
    sort(sorted.begin(), sorted.end());
    if (s == sorted) {
        cout << "Bob\n";
        return;
    }
    vector<int> idx;
    for(int i = 0; i < n; ++i) {
        if(s[i] != sorted[i]) {
            idx.push_back(i + 1);
        }
    }
    cout << "Alice\n";
    cout << idx.size() << '\n';
    for(auto i : idx) cout << i << " ";
    cout << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
