#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

// void krishna(){
//     int n, k; cin >> n >> k;

//     if (n > 1 && k == n - 1) {
//         cout << -1 << '\n';
//         return;
//     }

//     k = n - k;
//     int c0 = (n + 1) / 2, c1 = n / 2;

//     for (int i = 1; i <= k; ++i) {
//         if (i & 1) {
//             if (i + 2 > k) {
//                 while (c0--) cout << 0;
//             }
//             else {
//                 --c0;
//                 cout << 0;
//             }
//         }
//         else {
//             if (i + 2 > k) {
//                 while (c1--) cout << 1;
//             }
//             else {
//                 --c1;
//                 cout << 1;
//             }
//         }
//     }
//     cout << '\n';
// }
void krishna(){
    int n, k; cin >> n >> k;
    if (k == n - 1) {
        cout << -1 << '\n';
        return;
    }
    string ans = string( k / 2 + 1, '1') + string( (k + 1)/2 + 1 , '0');
    while(ans.size() < n){
        ans.push_back('1' - ans.back() + '0');
    }
    cout << ans << '\n';
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        //cout << "case : " << t << '\n';
        krishna();
    }
    return 0;
}
