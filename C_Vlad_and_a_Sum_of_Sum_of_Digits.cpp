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
    vector<int> s(5, 0);
    int sum = 0;
    for(int i = 9 ; i <= n ; i += 10){
        sum += 45;
        sum += s[0]*10 + s[1]*10 + s[2]*10 + s[3]*10 + s[4]*10;
        int incr = 0;
        while(s[incr] == 9){
            s[incr] = 0;
            incr++;
        }
        s[incr]++;
    }
    for(int i = 0; i < ((n + 1) % 10) ; ++i){
        sum += i;
        sum += s[0] + s[1] + s[2] + s[3] + s[4];
    }
    cout << sum << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
