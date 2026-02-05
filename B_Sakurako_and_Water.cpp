#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n ;
    cin >> n;
    vector a(n, vector<int>(n));
    for(auto &x : a)
        for(auto &e : x) cin >> e;

    int ans = 0;
    for(int i = 1 - n ; i < n ; ++i){
        int mn = INT_MAX;
        for(int j = max(0, -i) ; max(j, j + i) < n ; ++j)
            mn = min(mn , a[j][j + i]);
        ans += max(0, -mn);
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