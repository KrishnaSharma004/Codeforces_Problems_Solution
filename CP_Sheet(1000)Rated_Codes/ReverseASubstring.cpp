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

    str s;
    cin >> s;
    //find the first pair s[i-1],s[i]. s.t s[i-1]>s[i]; ... ba

    for(int i =1;i<n;++i){
        if(s[i]<s[i-1]){
            cout << "YES" << nl;
            cout << i << " " << i+1 << nl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}