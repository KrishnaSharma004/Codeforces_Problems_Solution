#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n, k;
    cin >> n >> k;
    int ev1 = 0, od1 = 0;
    for(int i = 0 ;i < n ; ++i){
        int x;
        cin >> x;
        if(x&1) od1++;
        else ev1++;
    }
    int ev2 = 0, od2 = 0;
    for(int i = 0 ;i < n ; ++i){
        int x;
        cin >> x;
        if(x&1) od2++;
        else ev2++;
    }
    ev1 -= ev2;
    od1 -= od2;
    if( (k&1) && ev1 < 0 ){
        cout << "no\n";
        return;
    }
    if( !(k&1) && od1 < 0 ){
        cout << "no\n";
        return;
    }
    cout << "yes\n";
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
