#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    vector<int> a(7);
    for(int i = 0; i < 7 ; ++i){
        cin >> a[i];
    }
    sort(all(a));
    int sum = 0;
    for(int i = 0 ; i < 6 ; ++i) sum += -1*a[i];
    sum += a[6];
    cout << sum << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
