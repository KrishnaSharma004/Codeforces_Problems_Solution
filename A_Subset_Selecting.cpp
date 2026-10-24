#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n+1);
    for(int i = 0; i < n ; ++i){
        int x;
        cin >> x;
        a[x]++;
    }
    for(int i = 1; i < n+1 ; ++i){
        a[i] += a[i-1];
    }
    for(int i = 0 ;i < n+1 ; ++i){
        if(a[i]-i*k < k){
            cout << i << '\n';
            return;
        }
        if(i>0 && a[i-1] == a[i]){
            cout << i << '\n';
            return;
        }
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
