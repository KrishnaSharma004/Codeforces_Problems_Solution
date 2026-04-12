#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    vector<int> a(4);
    for(int i = 0 ; i < 4 ; ++i){
        cin >> a[i];
    }
    sort(all(a));
    int dif = 1;
    for(int i = 0 ;i < 4 - 1 ; ++i){
        if(a[i] != a[i + 1]) dif++;
    }
    cout << 4 - dif << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
