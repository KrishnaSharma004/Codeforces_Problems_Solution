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
    vector<int> ans(n + 1);
    for(int i = 1; i <= n; i++){
        int p;
        cin >> p;
        ans[p] = i;  
    }
    for(int i = 1; i <= n; i++){
        cout << ans[i];
        if(i < n) cout << " ";
    }
    cout << "\n";
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
