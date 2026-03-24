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
    vector<pair<int,int> > price_quality(n);
    vector<pair<int, int> > quality_price(n);
    for(int i = 0 ; i < n ; ++i){
        int a, b;
        cin >> a >> b;
        price_quality[i].f = a;
        price_quality[i].s = b;
        quality_price[i].f = b;
        quality_price[i].s = a;
    }
    sort(all(price_quality));
    sort(all(quality_price));
    bool flg = false;
    for(int i = 0; i < n ;++i){
        if(price_quality[i].f < quality_price[i].s && price_quality[i].s > quality_price[i].f)
            flg = true;
    }
    if(flg) cout << "Happy Alex" << '\n';
    else cout << "Poor Alex" << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
