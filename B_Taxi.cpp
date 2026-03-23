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
    vector<int> cnt(5, 0);
    for(int i = 0; i < n ; ++i) cnt[a[i]]++;
    int ans = 0;
    ans += cnt[4];
    ans += cnt[3];
    cnt[1] -= cnt[3];
    if(cnt[2]&1){
        ans += ceil(cnt[2]/2.0);
        cnt[1] -= 2;
    }else{
        ans += cnt[2]/2;
    }
    if(cnt[1] > 0 && cnt[1] < 4){
        ans += 1;
    }else if(cnt[1] >= 4){
        ans += ceil(cnt[1]/4.0);
    }
    cout << ans << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}