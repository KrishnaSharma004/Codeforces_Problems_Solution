#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n, x;
    cin >> n >> x;

    int nx;
    if(x % 2 == 0){
        nx = x - 1;;
    }else nx = x;

    int cnt_odd = 0;
    int cnt_ev = 0;
    while(n--){
        int m;
        cin >> m;
        if(m & 1){
            cnt_odd++;
        }else cnt_ev++;
    }
    if(cnt_odd == 0){
        cout << "No" << '\n';
    }
    else if(!(x&1)){
        if(cnt_odd >= x){
            if(cnt_ev > 0) cout << "Yes" << '\n';
            else cout << "No" << '\n';
        }
        else{
            if(!(cnt_odd & 1)){
                if(cnt_odd - 1 + cnt_ev >= x) cout << "Yes" << '\n';
                else cout << "No" << '\n';
            }else{
                if(cnt_odd + cnt_ev >= x) cout << "Yes" << '\n';
                else cout << "No" << '\n';
            }
        }
    }
    else{
        if(cnt_odd >= x){
            cout << "Yes" << '\n';
        }
        else{
            if(!(cnt_odd & 1)){
                if(cnt_odd - 1 + cnt_ev >= x) cout << "Yes" << '\n';
                else cout << "No" << '\n';
            }else{
                if(cnt_odd + cnt_ev >= x) cout << "Yes" << '\n';
                else cout << "No" << '\n';
            }
        }
    }
}

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
