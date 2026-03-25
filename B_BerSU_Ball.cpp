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
    int m;cin >> m;
    vector<int> b(m);
    for(auto &i : b) cin >> i;
    sort(all(a));
    sort(all(b));
    int cnt = 0;
    unordered_multiset<int> skps;
    for(int j = 0; j < n ; ++j)
        for(int i = 0; i < m ; ++i){
            if(skps.find(i) != skps.end()) continue;
            if(abs(a[j] - b[i]) <= 1){
                cnt++;
                skps.insert(i);
                break;
            }
        }
    cout << cnt << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
