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

    if(n - k + 1 > 0 && (n - k + 1) & 1){
        cout << "YES" << '\n';
        for(int i = 1; i < k ; ++i){
            cout << 1 << " ";
        }
        cout << n - k + 1 << '\n';
    }else if(n - 2 * (k - 1) > 0 && !((n - 2 * (k - 1))&1)){
        cout << "YES" << '\n';
        for(int i = 1; i < k ; ++i){
            cout << 2 << " ";
        }
        cout << n - 2 * (k - 1) << '\n';
    }else{
        cout << "NO" << '\n';
    }
}

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
