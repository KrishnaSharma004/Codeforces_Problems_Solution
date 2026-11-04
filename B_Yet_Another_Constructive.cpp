#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    ll n,k,m;
    cin >> n >> k >> m;

    int e = ceil(m/(float)k);
    if(m < k){
        cout << "no" << '\n';
        return;
    }
    cout << "yes" << '\n';
    int i = 1;
    while(i <= n){
        if(i % k == 0){
            cout << m - (k-1) << " ";
        }else{
            cout << 1 << " ";
        }
        i++;
    }
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
