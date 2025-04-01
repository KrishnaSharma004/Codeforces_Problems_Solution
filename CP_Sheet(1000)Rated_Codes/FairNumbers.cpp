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
#define ull unsigned long long 

bool is_fair(ull n){
    //return true if 'n'is is_fair
    str x = to_string(n);
    for(int i=0;i<x.length();++i){
        if(x[i]!= '0' && n%(x[i]-'0')!=0)
        return false;
    }
    return true;
}

void solve(){
    ull n;
    cin >> n;
    
    while(!is_fair(n))
          n++;
    cout << n << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
