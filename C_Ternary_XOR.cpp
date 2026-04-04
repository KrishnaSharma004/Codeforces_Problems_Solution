#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    string x;
    cin >> x;
    vector<int> dg;
    for(int i = 0 ; i < n ; ++i){
        dg.pb(x[i] - '0');
    }
    vector<int> ans1;
    vector<int> ans2;
    ans1.pb(1);
    ans2.pb(1);
    int wh;
    int i;
    bool fill = false;
    for(i = 1; i < dg.size() ; ++i){
        if(ans1[i - 1] != ans2[i - 1]){
            if(ans1[i - 1] > ans2[i - 1]) wh = 2;
            else wh = 1;
            fill = true;
            break;
        }
        else{
            if(dg[i] == 2){
                ans1.pb(1);
                ans2.pb(1);
            }else if(dg[i] == 0){
                ans1.pb(0);
                ans2.pb(0);
            }else{
                ans1.pb(1);
                ans2.pb(0);
            }
        }
    }
    if(fill){
        if(wh == 1){
            while(i < dg.size()){
                ans1.pb(dg[i]);
                ans2.pb(0);
                i++;
            }
        }
        else{
            while(i < dg.size()){
                ans2.pb(dg[i]);
                ans1.pb(0);
                i++;
            }
        }
    }
    for(auto &i : ans1) cout << i;
    cout << '\n';
    for(auto &i : ans2) cout << i;
    cout << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
