#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vchar vector<char>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>

void solve(){
    int n;
    cin >> n;

    vint a(n),b(n);
    si elements;
    for(int i=0;i<n;++i){
        cin >> a[i];
        elements.insert(a[i]);
    }
    for(int i=0;i<n;++i){
        cin >> b[i];
        elements.insert(b[i]);
    }
    map <int,int> mp1,mp2;
    int cnt=1;
    mp1[a[0]] = 1;
    for(int i=1;i<n;++i){
        if(a[i]==a[i-1]) cnt++;
        else cnt = 1;
        
        mp1[a[i]] = max(mp1[a[i]],cnt);
    }

    mp2[b[0]] = 1;
    cnt = 1;
    for(int i=1;i<n;++i){
        if(b[i]==b[i-1]) cnt++;
        else cnt = 1;
        
        mp2[b[i]] = max(mp2[b[i]],cnt);
    }

    int ans = 1;
    for(auto e:elements){
        ans = max(ans,mp1[e]+mp2[e]);
    }

    cout << ans << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}