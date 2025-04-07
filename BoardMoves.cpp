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
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "

void logic(){
    ll n;
    cin >> n;
    n=(n+1)/2;
    ll ans = n*(n+1)*(2*n+1)/6 + n-2LL*(n*(n+1))/2;
    ans *= 8;
    
    cout << ans << nl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}
