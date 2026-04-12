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
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    sort(all(a));
    vector<int> ev, od;
    for(int i = 0; i < n ; ++i){
        if(a[i]&1) od.pb(a[i]);
        else ev.pb(a[i]);
    }
    ll sa = 0;
    ll sb = 0;
    bool achance = 1;
    while(0 != ev.size() || 0 != od.size()){
        if(achance){
            if(od.size() == 0){
                sa+=ev.back();
                ev.pop();
            }
            else if(ev.size() != 0){
                if(ev.back() < od.back()){
                    od.pop();
                }else{
                    sa += ev.back();
                    ev.pop();
                }
            }else{
                od.pop();
            }
            achance = 0;
        }else{
            if(ev.size() == 0){
                sb+=od.back();
                od.pop();
            }
            else if(od.size() != 0){
                if(od.back() < ev.back()){
                    ev.pop();
                }else{
                    sb += od.back();
                    od.pop();
                }
            }else{
                ev.pop();
            }
            achance = 1;
        }
    }
    if(sa > sb){
        cout << "Alice" << '\n';
    }else if(sb > sa){
            cout << "Bob" << '\n';
    }else{
        cout << "Tie" << '\n';
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
