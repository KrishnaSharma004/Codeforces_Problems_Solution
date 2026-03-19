#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int s, n;
    cin >> s >> n;

    vector<pair <int, int> > a;
    for(int i = 0; i < n ; ++i){
        int x, y;
        cin >> x >> y;
        a.pb({x,y});
    } 

    sort(all(a));
    int cnt = 0;
    for(auto &i : a){
        if(s <= i.f){
            break;
        }
        s += i.s;
        cnt++;
    }
    cout << (cnt < n ? "NO" : "YES") << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}