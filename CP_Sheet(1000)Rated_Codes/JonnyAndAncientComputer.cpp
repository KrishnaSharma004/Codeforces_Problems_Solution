#include <iostream>
#include <vector>
#include <string>
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
    ll a,b;
    cin >> a >>b;
    
    ll cnt1=0,cnt2=0;
    while(a%2==0){
        a/=2;
        cnt1++;
    }
    while(b%2==0){
        b/=2;
        cnt2++;
    }
    
    if(a!=b) cout << -1 << nl;
    else{
        if(cnt1==cnt2) cout << 0 << nl;
        else{
            //multiply by 2,4,8 -> 1,2,3.
            ll diff = abs(cnt2-cnt1);
            cout << diff/3 + (diff%3 != 0) << nl;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
