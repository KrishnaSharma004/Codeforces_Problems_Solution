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
    for(int &i : a) cin >> i;

    if(a[0] > a[1]){
        cout << a[0] + a[1] << '\n';
    }
    else{
        cout << a[0] * 2 << '\n';
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