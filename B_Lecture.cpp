#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n,m;
    cin >> n >> m;
    vector<pair<string, string> > mp;
    for(int i = 0; i < m ; ++i){
        string ai, bi;
        cin >> ai >> bi;
        mp.pb({ai, bi});
    }
    vector<string> inp(n);
    for(auto &i : inp) cin >> i;
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0; j < m ; ++j){
            if(mp[j].f == inp[i] || mp[j].f == inp[i]){
                if((mp[j].f).size() <= (mp[j].s).size()){
                    inp[i] = mp[j].f;
                }else inp[i] = mp[j].s;
                break;
            }
        }
    }
    for(auto &i : inp) cout << i << " ";
    cout << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
