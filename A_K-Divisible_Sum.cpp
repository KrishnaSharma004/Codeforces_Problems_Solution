#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n, k;
    cin >> n >> k;
    int no = k - (n-1) % k;
    if(n == 1) cout << k << '\n';
    else if((no - 1) / (n) == 0 && (no - 1) % (n) == 0){
        cout << no << '\n';
    }else{
        if((no - 1) % (n) != 0){
            cout << (no - 1) / (n) + 2 << '\n';
        }else{
            cout << (no - 1) / (n) + 1 << '\n';
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
