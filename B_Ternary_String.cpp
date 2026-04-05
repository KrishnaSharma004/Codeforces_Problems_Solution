#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

int dist(int a, int b, int c){
    vector<int> s;
    s.pb(a);s.pb(b);s.pb(c);
    sort(all(s));
    return (s[1] - s[0]) + (s[2] - s[1]);
}
void solve(){
    string a;
    cin >> a;
    int pos1 = -1, pos2 = -1, pos3 = -1;
    int ans = a.size();
    for(int i = 0 ; i < a.size() ; ++i){
        if(a[i] == '1') pos1 = i;
        else if(a[i] == '2') pos2 = i;
        else pos3 = i;
        if(pos1 != -1 && pos2 != -1 && pos3 != -1){
            ans = min(ans, dist(pos1,pos2,pos3) + 1);
        }
    }
    if(pos1 != -1 && pos2 != -1 && pos3 != -1){
        cout << ans << '\n';
    }else cout << 0 << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
