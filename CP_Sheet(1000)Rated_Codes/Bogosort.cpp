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
    int n;
    cin >> n;
    
    vint arr(n);
    for(int i=0;i<n;++i) cin >> arr[i];
    
    sort(rr(arr),greater<int>());
    for(int i=0;i<n;++i){
        cout << arr[i] << " ";
    }
    cout << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
