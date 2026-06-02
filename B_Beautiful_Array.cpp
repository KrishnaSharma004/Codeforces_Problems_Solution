#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    ll rem = s - k*b;
    if(rem < 0 || rem > n*(k-1)){
        cout << -1 << '\n';
    }else{
        cout << k*b + min(rem,k-1) << " ";
        rem -= min(rem, k-1);
        for(int i = 0 ;i < n -1 ; ++i){
            cout << min(rem, k-1) << " ";
            rem -= min(rem, k-1);
        }
        cout << '\n';
    }
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        krishna();
    } 
    return 0;
}