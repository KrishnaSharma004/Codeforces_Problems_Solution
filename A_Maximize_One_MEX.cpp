#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    if(k == 1){
        cout << -1 << '\n';
        return;
    }
    vector<int> nw(n-k+1);
    for(int i = 0 ; i <= n-k; ++i){
        nw[i] = a[i];
    }
    sort(all(nw));
    int mex = 0;
    for(int i = 0 ;i <= n-k ; ++i){
        if(nw[i] == mex) mex++;
    }
    vector<int> ans(2,0);
    for(int i = n-k+1 ; i < n ; ++i){
        if(a[i] == mex){
            ans[0] = i+1;
            break;
        }
    }
    for(int i = 0 ; i <= n-k ; ++i){
        if(a[i] > mex && a[i] > ans[1]){
            ans[1] = i+1;
        }
    }
    if(ans[0] && ans[1]){
        cout << ans[0] << " " << ans[1] << '\n';
    }else{
        cout << -1 << '\n';
    }
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        //cout << "case : " << t << '\n';
        krishna();
    }
    return 0;
}
