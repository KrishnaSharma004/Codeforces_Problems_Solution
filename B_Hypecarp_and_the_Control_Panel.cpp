#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(auto &i : a) cin >> i;

    int cnt = 1;
    int i = 1;
    while(i < n){
        if(a[i] != a[i - 1]) cnt++;
        i++;
    }
    bool p2 = 0;
    bool p1 = 0;
    i = 0;
    int j = 1;
    while(j < n){
        if(a[i] == a[j]){
            //check left 
            if(i > 0 && a[i] != a[i-1]){
                if(i > 1 && a[i] != a[i-2] && a[i-1] == a[i-2]){
                    p2 = 1;
                    break;
                }else if(i > 1 && a[i] != a[i-2]){
                    p1 = 1;
                }else if(i == 1){
                    p1 = 1;
                }
            }
            //check right
            if(j < n-1 && a[j] != a[j+1]){
                if(j < n-2 && a[j] != a[j+2] && a[j+1] == a[j+2]){
                    p2 = 1;
                    break;
                }else if(j < n-2 && a[j] != a[j+2]){
                    p1 = 1;
                }else if(j == n-2){
                    p1 = 1;
                }
            }
        }
        i++;j++;
    }
    if(p2){
        cout << cnt + 2 << '\n';
    }
    else if(p1) cout << cnt + 1 << '\n';
    else cout << cnt << '\n';
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
