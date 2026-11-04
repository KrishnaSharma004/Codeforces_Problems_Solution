#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int mx = 0;
    int ans = 1;
    for(int i = 0 ; i < n; ++i){
        if(i > mx) ans++;
        for(int j = n - 1 ; j > i ; --j){
            int l = i, r = j;
            while(l <= r){
                if(s[l] == s[r]){
                    l++;r--;
                }else{
                    break;
                }
            }
            if(l >= r){
                mx = max(j,mx);
            } 
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
