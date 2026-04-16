#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    ll n, k;
    cin >> n >> k;

    if(n&1){
        cout << (n+1)/2 - 1 << " " << (n+1)/2 - 1 << " " << 1 << '\n';
    }else{
        if((n / 2)&1){
            cout << n/2 - 1 << " " << n/2 - 1 << " " << 2 << '\n';
        }else{
            cout << n/2 << " " << n/4 << " " << n/4 << '\n';
        }
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
