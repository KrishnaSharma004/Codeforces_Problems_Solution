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
    vector<int> cnt(n + 1);
    for(int i = 0; i < n ; ++i){
        int x;
        cin >> x;
        cnt[x]++;
    }
    int ans = 0;
    for(int i = 2 ; i <= 2*n ; ++i){
        int cur = 0;
        for(int j = 1 ; j < (i + 1)/ 2 ; ++j){
            if(i - j > n) continue;
            cur += min(cnt[j], cnt[i - j]);
        }
        if(i % 2 == 0) cur += cnt[i / 2] / 2;
        ans = max(ans, cur);
    }
    cout << ans << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
