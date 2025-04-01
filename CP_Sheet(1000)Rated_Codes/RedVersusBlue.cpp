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
    int n,r,b;
    cin >> n >> r >> b;
    
    str ans;
    int nreds = r/(b+1);
    int rem  = r%(b+1);
    //put reds put a b, put reds put a b.
    for(int i=0;i<b;++i){
        for(int j=0;j<nreds;++j) ans.pb('R');
        if(rem){
            ans.pb('R');
            rem--;
        }
        ans.pb('B');
    }
    //rem=0
    for(int i=0;i<nreds;++i){
        ans.pb('R');
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
