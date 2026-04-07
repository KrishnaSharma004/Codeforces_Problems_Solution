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
    vector<int> a;
    int t = n;
    for(int i = 1; i <= n ; ++i){
        a.pb(i);
        a.pb(i + t++);
        a.pb(a.back() + 1);
    }
    for(auto &i : a) cout << i << " ";
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
