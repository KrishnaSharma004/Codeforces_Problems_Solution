#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    ll n, k;
    cin >> n >> k;
    cout << pow(2,(n-k)+1) + 2*(n-k-1) << '\n';
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