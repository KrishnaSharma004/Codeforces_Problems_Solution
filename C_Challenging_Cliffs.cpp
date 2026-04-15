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
    int str;
    int end;
    int diff = INT_MAX;
    for(int i = 0 ; i < n - 1; ++i){
        if(diff > a[i + 1] - a[i]){
            diff = a[i + 1] - a[i];
            str = i;
            end = i + 1;
        }
    }
    vector<int> ans;
    ans.pb(a[str]);
    for(int i = str + 1 ; i < n ; ++i){
        if(i == end) continue;
        ans.pb(a[i]);
    }
    for(int i = 0 ; i  < str ; ++i){
        ans.pb(a[i]);
    }
    ans.pb(a[end]);
    for(auto &i : ans) cout << i << " ";
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