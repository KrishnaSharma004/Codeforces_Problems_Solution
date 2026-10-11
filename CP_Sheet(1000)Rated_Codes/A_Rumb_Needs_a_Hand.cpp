#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void krishna(){
    int n;
    cin >> n;
 
    vector<int> p(n);
    for(auto &i : p) cin >> i;
 
    vector<int> notInPlace;
    for(int i = 0 ; i < n ; ++i){
        if(p[i] != i+1){
            notInPlace.push_back(p[i]);
        }
    }
    
    reverse(notInPlace.begin(), notInPlace.end());
    if(is_sorted(notInPlace.begin(), notInPlace.end())){
        cout << "YES" << '\n';
    }else cout << "NO" << '\n';
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