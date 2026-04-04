#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;
//BITMASK Approach : 
// bool set_bit(int set, int bit){
//     return (((set>>bit)&1) == 1);
// }
// void solve(){
//     int n;
//     cin >> n;
    
//     vector<int> a(n, 0);
//     for(auto &i : a) cin >> i;

//     bool ok = false;

//     for(int i = 0 ; i < (1<<n) ; ++i){
//         int sum = 0;
//         for(int j = 0; j < n ; ++j){
//             if(set_bit(i, j)) sum += a[j];
//             else sum -= a[j];
//         }
//         sum = ((sum % 360) + 360) % 360;
//         if(!sum) ok = true;
//     }
//     cout << (ok ? "YES" : "NO") << '\n';
// }
void solve(){
    int n;
    cin >> n;
    vector<bool> dp(360, false);
    dp[0] = true;
    while(n--){
        int a;
        cin >> a;
        vector<bool> ndp(360, false);
        for(int i = 0; i < 360 ; ++i){
            if(!dp[i]) continue;
            ndp[(i + a) % 360] = true;
            ndp[(i - a + 360) % 360] = true;
        }
        dp = ndp;
    }
    cout << (dp[0] ? "YES" : "NO") << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
