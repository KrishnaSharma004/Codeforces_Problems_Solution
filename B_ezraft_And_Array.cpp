#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

vector<ll> ans({1,2,3});

void krishna(){
    int n;
    cin >> n;
    if(n == 2){
        cout << -1 << '\n';
        return;
    }else{
        for(int i = 0 ;i < n; ++i){
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    while(ans.size() < 50){
        ans.push_back(ans.back() * 2);
    }
    int t;
    cin >> t;
    while(t--){
        //cout << "case : " << t << '\n';
        krishna();
    }
    return 0;
}
