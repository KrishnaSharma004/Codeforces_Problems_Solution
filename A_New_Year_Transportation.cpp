#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n, t;
    cin >> n >> t;
    vector<int> a(n - 1);
    for(int &i : a) cin >> i;

    int i = 0;
    while(i < n - 1){
        if(i + 1 == t){
            break;
        }
        i += a[i];
    }
    if(i + 1 == t) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}