#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    if(n == 1){
        if(a[0] == b[0]){
            cout << 2 << '\n';
        }else cout << 1 << '\n';
    }
    else {
        map<int,int> ma;
        map<int,int> mb;
        int cnt = 1;
        for(int i = 0 ; i < n-1 ; ++i){
            if(a[i] == a[i+1]){
                cnt++;
            }else{
                ma[a[i]] = max(cnt, ma[a[i]]);
                cnt = 1;
            }
        }
        ma[a[n-1]] = max(cnt, ma[a[n-1]]);
        cnt = 1;
        for(int i = 0 ; i < n-1 ; ++i){
            if(b[i] == b[i+1]){
                cnt++;
            }else{
                mb[b[i]] = max(cnt, mb[b[i]]);
                cnt = 1;
            }
        }
        mb[b[n-1]] = max(cnt, mb[b[n-1]]);
        int ans = 1;
        for(auto &i : ma){
            ans = max(mb[i.first] + i.second, ans);
        }
        for(auto &i : mb){
            ans = max(ma[i.first] + i.second, ans);
        }
        cout << ans << '\n';
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