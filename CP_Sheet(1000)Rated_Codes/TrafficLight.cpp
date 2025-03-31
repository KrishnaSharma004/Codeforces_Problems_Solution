#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>

void solve(){
    int n;
    char c;
    cin >> n >> c;

    str s;
    cin >> s;
    s.append(s);

    int ans = -1e9;
    int last = -1;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='g') last=i;
        if(s[i]== c){
            ans = max(ans,last-i);
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