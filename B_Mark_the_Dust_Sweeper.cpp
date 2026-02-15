#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    int pos = 0;
    while(pos < n && a[pos] == 0){
        pos++;
    }
    long long ans = 0;
    for(int i = pos ; i < n - 1 ; ++i){
        ans += a[i];
        if(a[i] == 0) ans++;
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