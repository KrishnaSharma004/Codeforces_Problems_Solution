#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    for(int i = 1 ; i*i <= x ; ++i){
        if(x % i == 0){
            if(i <= n && x / i <= n){
                if(x / i != i) cnt+=2;
                else cnt++;
            }
        }
    }
    cout << cnt << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
