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
    vector<ll> v(n);
    for(auto &i : v) cin >> i;

    vector<ll> op1(n);
    op1[0] = v[0];
    for(int i = 1 ; i < n ; ++i){
        op1[i] = v[i] + op1[i - 1];
    }
    sort(all(v));
    vector<ll> op2(n);
    op2[0] = v[0];
    for(int i = 1 ; i < n ; ++i){
        op2[i] = v[i] + op2[i - 1];
    }
    int m;
    cin >> m;
    while(m--){
        int t, l, r;
        cin >> t >> l >> r;
        if(t == 1){
            if(l > 1) cout << op1[r - 1] - op1[l - 2] << '\n';
            else cout << op1[r - 1] << '\n';
        }else{
            if(l > 1) cout << op2[r - 1] - op2[l - 2] << '\n';
            else cout << op2[r - 1] << '\n';
        }
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
