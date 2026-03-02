#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
#define int long long

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n ; ++i) cin >> a[i];

        int sum = 0;
        for(int i = 0; i < n ; ++i){
            sum += a[i];
        }
        int mex = (n * (n + 1)) / 2 - sum;
        
        vector<int> nw(n + 1);
        for(int i = 0; i < n; ++i){
            nw[i] = a[i];
        }
        nw[n] = mex;
        int pos = k % (n + 1);

        vector<int> ans(n + 1);
        for(int i = 0; i <= n ; ++i){
            ans[ ((i + pos + 0LL) % (n + 1) )] = nw[i];
        }
        
        for(int i = 0; i < n ; ++i){
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}