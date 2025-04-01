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
    str a,b;
    cin >> a >> b;
    
    //find the length of longest common substring 
    //ans = m-lcs + n-lcs
    int m = a.length(),n=b.length();
    int ans = m+n;
    
    for(int i=0;i<m;++i){
        for(int j=1;j<=m-i;++j){
            str a_sub = a.substr(i,j);
            
            if(b.find(a_sub) != string::npos){
                int ops = (m-j) + (n-j);
                ans = min(ans,ops);
            }
        }
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
