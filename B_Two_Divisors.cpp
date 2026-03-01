#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

ll gcd(ll a, ll b){
    return b ? gcd(b, a % b) : a;
}
ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int l = lcm(a, b);
        cout << (l == b ? b/a * l : l) << '\n';
    }
    return 0;
}