#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;
const int N = 1e5 + 10;
vector<int> hs(N);

void solve(){
    int n;
    cin >> n;
    vector<int> x(n);
    for(auto &i : x) cin >> i;
    sort(all(x));
    for(int i = 0; i < n ; ++i) hs[x[i]]++;
    for(int i = 1; i < N ; ++i) hs[i] += hs[i - 1];
    int q;
    cin >> q;
    while(q--){
        int y; 
        cin >> y;
        if(y > 1e5 + 5){
            cout << hs[x[n - 1]] << '\n';
        }
        else cout << hs[y] << '\n';
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}