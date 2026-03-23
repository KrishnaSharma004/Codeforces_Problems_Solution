#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

vector<int> findmx(vector<int> &a){
    vector<pair<int, int> > temp(a.size());

    for(int i = 0 ; i < temp.size() ; ++i){
        temp[i].f = a[i];
        temp[i].s = i;
    }
    sort(temp.rbegin(), temp.rend());

    vector<int> ans(3);

    for(int i = 0 ; i < 3 ; ++i) ans[i] = temp[i].second;

    return ans;
}
void solve(){
    int n;
    cin >> n;

    vector<int> a(n),b(n),c(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    for(int &i : c) cin >> i;

    vector<int> na = findmx(a);
    vector<int> nb = findmx(b);
    vector<int> nc = findmx(c);

    int ans = 0;
    for(int i = 0 ; i < 3 ; ++i)
        for(int j = 0 ; j < 3 ; ++j)
            for(int k = 0 ; k < 3 ; ++k){
                int x = na[i], y = nb[j], z = nc[k];

                if(x==y || y==z || z==x) continue;

                ans = max(ans, a[x] + b[y] + c[z]);
            }

    cout << ans << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}