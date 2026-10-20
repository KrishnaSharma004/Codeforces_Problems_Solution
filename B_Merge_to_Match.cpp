#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n,m;
    cin >> n >> m;
    map<int, int> e;
    for(int i = 0 ; i < n ; ++i){
        int x;
        cin >> x;
        ++e[x];
    }
    for(int i = 0 ; i < m ; ++i){
        int x;
        cin >> x;
        --e[x];
    }
    if(n < m*2){
        cout << "no" << '\n';
        return;
    }
    auto v = e | views::values;
    for(int i = 0 ; i < 2 ; ++i){
        int s = 0;
        for(int x : v)
            if((s += x) < 0){
                cout << "no" << '\n';
                return;
            }
        ranges::reverse(v);
    }
    cout << "yes" << '\n';
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
