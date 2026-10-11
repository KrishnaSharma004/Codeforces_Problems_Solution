#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n),b(k);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());

    ll ans = 0;
    int i = 0, j = 0;
    while(i < k && j < n){
        if(b[i] == 1){
            j++;
            i++;
            continue;
        }
        if(b[i] > (n-j)){
            while(j < n){
                ans += a[j];
                j++;
            }
            break;
        }
        for(int k = j ; k < j + (b[i]-1) ; ++k){
            ans += a[k];
        }
        j = j + b[i];
        i++;
    }
    while(j < n){
        ans+= a[j];
        j++;
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


