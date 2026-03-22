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
    map<string, int, greater<string> > mp;
    for(int i = 0; i < n ; ++i){
        string str;
        cin >> str;
        mp[str]++;
    }
    int mx = 0;
    string ans;
    for(auto &i : mp){
        if(i.s > mx){
            mx = i.s;
            ans = i.f;
        }
    }
    cout << ans << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}