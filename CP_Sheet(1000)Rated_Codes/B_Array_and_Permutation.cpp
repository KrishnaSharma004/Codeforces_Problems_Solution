#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void krishna(){
    int n;
    cin >> n;
 
    vector<int> p(n), a(n);
    for(auto &i : p) cin >> i;
    for(auto &i : a) cin >> i;
 
    int i = 0, j = 0;
    while(i < n && j < n){
        while(i < n && a[j] != p[i]){
            i++;
        }
        if(j < n && i >= n) break;
        while(j < n-1 && a[j] == a[j+1]){
            j++;
        }
        i++;j++;
    }
    if(j >= n) cout << "YES" << '\n';
    else cout << "NO" << '\n';
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