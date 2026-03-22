#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    ll n, t;
    cin >> n  >> t;
    if(t / 10 >= n) cout << -1;
    else if(t == 10){
        n -= 1;
        while(n){
            cout << 1;
            n--;
        }
        cout << 0;
    }
    else while(n){
        cout << t;
        n--;
    }
    cout << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    solve();
    return 0;
}