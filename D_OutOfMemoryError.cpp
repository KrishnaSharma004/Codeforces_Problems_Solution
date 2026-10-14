#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    int n,m,h;
    cin >> n >> m >> h;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;
    vector<ll> original = a;
    vector<ll> last_updated(n,-1);

    int last_reset = -1;
    int reset_count = 0;
    for(int i = 0 ; i < m ; ++i){
        int b, c;
        cin >> b >> c;
        b--;
        if(last_updated[b] < last_reset) a[b] = original[b];
        a[b] += c;
        if(a[b] > h){
            last_reset = i;
            reset_count++;
            a[b] = original[b];
        }
        last_updated[b] = i;
    }
    for(int i = 0 ; i < n ; ++i){
        if(last_updated[i] < last_reset) a[i] = original[i];
        cout << a[i] << " ";
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
        // cout << "case : " << t << '\n';
        krishna();
    }
    return 0;
}
