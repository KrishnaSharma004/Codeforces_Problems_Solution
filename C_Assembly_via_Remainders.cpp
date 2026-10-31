#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n;
    cin >> n;
    vector<ll> x(n-1);
    for(auto &i : x) cin >> i;

    vector<ll> a(n);
    a[0] = x[0]+1;
    for(int i = 1 ; i < n ; ++i){
        
        if(i < n-1) 
            a[i] = a[i-1]*ceil(x[i]/(a[i-1]*1.0)) + x[i-1];
        else a[i] = x[n-2];
    }
    for(auto &i : a) cout << i << " ";
    cout << '\n';
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
