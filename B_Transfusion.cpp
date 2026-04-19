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
    vector<int> a(n);
    ll sum = 0;
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
        sum += a[i];
    }
    if(sum % n != 0){
        cout << "No" << '\n';
    }
    else{
        ll r = sum / n;
        ll oddsum = 0;
        ll evnsum = 0;
        for(int i = 0 ; i < n ; ++i){
            if(i&1) oddsum += a[i];
            else evnsum += a[i];
        }
        if(oddsum % r != 0 || evnsum % r != 0){
            cout << "No" << '\n';
        }else{
            if(n&1){
                if(oddsum / r == n/2 && evnsum / r == (n/2) + 1) cout << "Yes" << '\n';
                else cout << "No" << '\n';
            }else{
                if(oddsum / r == n/2 && evnsum / r == n/2) cout << "Yes" << '\n';
                else cout << "No" << '\n';
            }
        }
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
