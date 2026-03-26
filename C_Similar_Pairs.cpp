#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n;cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    vector<int> ev;
    vector<int> od;
    for(int i = 0; i < n ; ++i){
        if(a[i] & 1) od.pb(a[i]);
        else ev.pb(a[i]);
    }
    sort(all(ev));sort(all(od));
    bool flg = 0;
    if(od.size() % 2 == 0 && ev.size() % 2 == 0){
        flg = 1;
    }
    else if(od.size() % 2 != 0 && ev.size() % 2 != 0){
        for(int i = 0; i < od.size() ; ++i)
            for(int j = 0; j < ev.size() ; ++j){
                if(abs(od[i] - ev[j]) == 1){
                    flg = 1;
                    break;
                }
            }
    }
    if(flg) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
