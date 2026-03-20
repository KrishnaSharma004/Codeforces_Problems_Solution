#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

ll gcd(ll a, ll b) {
    return (b == 0) ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void solve(){
    ll a, b , c, m;
    cin >> a >> b >> c >> m;

    ll wa = 6 * (m / a) - 3 * (m / lcm(a, b)) - 3 * (m / lcm(a , c)) + 2 * (m / lcm(a, lcm(b,c)));
    ll wb = 6 * (m / b) - 3 * (m / lcm(a, b)) - 3 * (m / lcm(b , c)) + 2 * (m / lcm(a, lcm(b,c)));
    ll wc = 6 * (m / c) - 3 * (m / lcm(a, c)) - 3 * (m / lcm(b , c)) + 2 * (m / lcm(a, lcm(b,c)));

    cout << wa << " " << wb << " " << wc << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}