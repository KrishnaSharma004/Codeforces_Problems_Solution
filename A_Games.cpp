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
    vector<pair<int, int> > a(n);
    for(int i = 0 ; i < n ; ++i){
        int x, y;
        cin >> x >> y;
        a[i].f = x;
        a[i].s = y;
    }
    int cnt = 0;
    for(int i = 0; i < n ; ++i)
        for(int j = 0; j < n ; ++j){
            if(i != j) if(a[i].f == a[j].s) cnt++;
        }
    cout << cnt << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
