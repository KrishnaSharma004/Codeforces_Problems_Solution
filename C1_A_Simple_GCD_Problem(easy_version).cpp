#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;
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
    vector<int> b(n);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    vector<int> gd(n - 1);
    for(int i = 0 ; i < n - 1 ; ++i){
        gd[i] = gcd(a[i], a[i + 1]);
    }
    vector<int> lm(n - 2);
    for(int i = 0 ; i < n - 2 ; ++i){
        lm[i] = lcm(gd[i], gd[i + 1]);
    }
    int cnt = 0;
    for(int i = 0 ; i < n - 2 ; ++i){
        if(a[i + 1] / lm[i] > 1) cnt++;
    }
    if(a[0] != gd[0]) cnt++;
    if(a[n - 1] != gd[n - 2]) cnt++;
    cout << cnt << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
