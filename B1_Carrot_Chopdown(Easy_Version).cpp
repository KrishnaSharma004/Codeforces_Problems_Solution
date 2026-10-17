#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for(auto &i : a) cin >> i;

    vector<int> hs(m+1, 0);
    for(int i = 0 ; i < n ; ++i){
        hs[a[i]]++;
    }
    vector<int> ps(m+1);
    ps[0] = hs[0];
    for(int i = 1 ; i <= m ; ++i){
        ps[i] = ps[i-1] + hs[i];
    }

    int ans = 1;
    int gr = n;
    for(int i = 1 ; i <= m ; ++i){
        if(hs[i] == 0) continue;
        int dbl = 0;
        if(i*2 <= m)
            dbl = hs[i*2];
        gr -= hs[i];
        ans = max(ans, hs[i]+(gr+dbl));
        if((i&1) == 0){
            int bg = n - ps[i/2];
            //cout << "bg  :" << bg << " i : " << i  << "hs" << hs[i] << '\n';
            ans = max(ans, hs[i]+bg); 
        }
    }
    cout << ans << '\n';
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