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
    for(int &i : a) cin >> i;

    sort(all(a));
    if(k == n){
        cout << a[n - 1] << '\n';
    }else if(k == 0) {
        if(a[0] == 1) cout << -1 << '\n';
        else cout << a[0] - 1 << '\n';
    }else{
        if(a[k] == a[k - 1]) cout << -1 << '\n';
        else cout << a[k] - 1 << '\n';
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}

