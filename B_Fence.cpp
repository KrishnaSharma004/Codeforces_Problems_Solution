#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    if(n == k) cout << 1 << '\n';
    else{
        vector<int> sum(n - k + 1, 0);
        for(int i = 0; i < k ; ++i){
            sum[0] += a[i];
        }

        for(int i = 1 ; i <= n - k ; ++i) sum[i] = sum[i - 1] - a[i - 1] + a[k - 1 + i];
        int min_idx = 0;
        int min_ele = sum[0];
        for(int i = 1 ; i <= n - k ; ++i){
            if(sum[i] < min_ele){
                min_idx = i;
                min_ele = sum[i];
            }
        }
        cout << min_idx + 1 << '\n';
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
