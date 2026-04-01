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
    int num, val;
    int cur = 0;
    int ones = 0;
    int best = -1e9;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num == 1) ones++;
        int val = num == 1 ? -1 : 1;
        cur = max(val, val + cur);
        best = max(cur, best);
    }
    cout << best + ones;
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
