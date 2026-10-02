#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int T = 60;

void krishna(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
        for(int i = 0; i < T ; ++i){
            int nxtvalue = 0;
            for(auto c : to_string(x)) nxtvalue += (c-'0')*(c-'0');
            x = nxtvalue;
        }
    }
    int ans = 0;
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0; j < n ; ++j){
            ans += a[i] == a[j];
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
        // cout << "case : " << t << '\n';
        krishna();
    } 
    return 0;
}