#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
#define al(x) x.begin(), x.end()

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    vector<int> res(n + 1, 1);
    n = unique(al(a)) - a.begin();
    a.resize(n);
    for(int i = 0; i < n ; ++i){
        res[a[i]]++;
    }
    res[a[0]]--;
    res[a[n - 1]]--;

    int ans = 1e9;
    for(int i = 0 ; i < n ;++i){
        ans = min(ans, res[a[i]]);
    }

    cout << ans << '\n';
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}