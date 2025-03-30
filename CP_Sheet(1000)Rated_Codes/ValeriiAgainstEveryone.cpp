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
    cin >>n;
    si st;
    for(int i=0;i<n;++i){
        int val;
        cin >> val;
        st.insert(val);
    }
    if(st.size() == n) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}