#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    int x, n;
    cin >> x >> n;
    if(n&1) cout << x << '\n';
    else cout << 0 << '\n';
}
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        // cout << "case : " << t << '\n';
        krishna();
    }
    return 0;
}