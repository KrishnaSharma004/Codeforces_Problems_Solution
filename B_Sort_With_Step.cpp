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
        cout << 0 << '\n';
        return;
    }
    int cnt = 0;
    for(int i = 0 ;i < k ; ++i){
        unordered_set<int> st;
        for(int j = i ; j < n; j += k){
            st.insert(a[j]);
        }
        for(int j = i+1 ; j <= n ; j += k){
            if(st.find(j) == st.end()) cnt++;

            if(cnt > 2){
                cout << -1 << '\n';
                return;
            }
        }
    }
    if(!cnt) cout << 0 << '\n';
    else if(cnt == 2) cout << 1 << '\n';
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
