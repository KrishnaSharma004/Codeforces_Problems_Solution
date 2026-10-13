#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    sort(a.begin(), a.end());
    int i = 0;
    int j = n-1;
    int ans = 0;
    while(i < j){
        if(a[i] + a[j] == k){
            ans++;
            i++;j--;
        }
        else if(a[i] + a[j] < k){
            i++;
        }
        else{
            j--;
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
        // cout << "case : " << t << '\n';
        krishna();
    }
    return 0;
}
