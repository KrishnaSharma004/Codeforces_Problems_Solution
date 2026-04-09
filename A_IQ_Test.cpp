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
    vector<int> odd;
    vector<int> even;
    for(int i = 0; i < n ; ++i){
        int x;
        cin >> x;
        if(x&1) odd.pb(i);
        else even.pb(i);
    }
    if(odd.size() == 1) cout << odd[0] + 1 << '\n';
    else cout << even[0] + 1 << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
