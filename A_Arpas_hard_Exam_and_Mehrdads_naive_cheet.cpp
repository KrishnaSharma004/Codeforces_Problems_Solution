#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;
void solve(){
    int n;
    cin >> n;
    if(n == 0) cout << 1 << '\n';
    else if(n % 4) cout << 8 / (n % 4) << '\n';
    else cout << 6 << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
