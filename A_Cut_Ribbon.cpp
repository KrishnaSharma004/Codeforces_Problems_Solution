#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

const int inf = 4 * 1e4 + 5;
int dp[inf];//max split for sum i 
int f(int n,int a, int b, int c){
    if(n == 0) return 0;
    if(n < a) return -inf;
    if(dp[n] != -1) return dp[n];

    int ans = 0;
    if(n - a >= 0){
        ans = f(n - a,a,b,c) + 1;
    }
    if(n - b >= 0){
        ans = max(ans, f(n - b,a,b,c) + 1);
    }
    if(n - c >= 0){
        ans = max(ans, f(n - c,a,b,c) + 1);
    }
    return dp[n] = ans;
}
//DP : 
void solve(){
    int n;
    vector<int> a(3);
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(all(a));

    cout << f(n,a[0],a[1],a[2]) << '\n';
}
// Brute force : 
void solvebf(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;

    int ans = 0; 
    for(int x = 0; a*x <= n ; ++x){
        for(int y = 0; b*y + a*x <= n ; ++y){
            int cz = n - (a*x + b*y);
            if(cz % c == 0){
                int z = cz / c;
                ans = max(ans, x+y+z);
            }
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
