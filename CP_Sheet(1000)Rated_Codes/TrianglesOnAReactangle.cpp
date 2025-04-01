#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)

void solve(){
    ll w,h;
    cin >> w >> h;
    
    ll ans =0;
    for(int i=0;i<4;++i){
        int k;
        cin >>k;
        
        vll points(k);
        for(int j=0;j<k;++j){
            cin >> points[j];
        }
        
        ans = max(ans,(points[k-1]-points[0])*(i<2?h:w));
    }
    cout << ans << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
