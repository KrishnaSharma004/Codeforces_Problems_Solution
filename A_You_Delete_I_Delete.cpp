#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    string s;
    cin >> s;

    bool first0 = 1,first1 = 1; 
    for(auto &i : s) {
        if(i == '0' && first0){
            first0 = 0;
            continue;
        }
        if(i == '1' && first1){
            first1 = 0;
            continue;
        }
        cout << i;
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
