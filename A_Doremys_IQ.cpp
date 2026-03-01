#include <bits/stdc++.h>

using namespace std;
#define int long long int 
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()

//constructive algo : 
void solve(){
    int n, q;
        cin >> n >> q;
        vector<int> cn(n);
        for(int &i : cn) cin >> i;
 
        vector<int> ans(n, 0);
        int qt = 0;
        for(int i = n - 1 ; i >= 0 ; --i){
            if(cn[i] <= qt){
                ans[i] = 1;
            }else{
                if(qt < q){
                    ans[i] = 1;
                    qt++;
                }else{
                    ans[i] = 0;
                }
            }
        }
        for(int i : ans) cout << i;
        cout << '\n';
}

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for(int &i : v) cin >> i;
        //using binary search : 
        vector<int> good, bad;
        for(int i = 0 ; i < n ; ++i){
            if(v[i] > q)
                bad.pb(i);
            else 
                good.pb(i);
        }

        int l = 0, hg = bad.size() - 1;
        int ans = n;
        while(l <= hg){
            int mid = (l + hg) / 2;
            int ok = 1, cur_iq = q;
            for(int i = bad[mid] ; i < n ; ++i){
                if(cur_iq == 0)
                    ok = 0;
                else{
                    if(v[i] > cur_iq)
                        cur_iq--;
                }
            }
            if(ok){
                hg = mid - 1;
                ans = bad[mid];
            }else{
                l = mid + 1;
            }
        }
        for(int i = 0; i < ans ; ++i){
            if(v[i] > q)
                cout << 0;
            else
                cout << 1;
        }
        for(int i = ans ; i < n ; ++i){
            cout << 1;
        }
        cout << '\n';
    }
    return 0;
}