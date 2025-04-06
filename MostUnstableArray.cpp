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
ll cost=1e18;

void logic(){
    ll n,m;
    cin >> n >> m;
    if(n==1){
        cout << 0 << nl;
    }else if(n==2){
        cout << m << nl;
    }else{
        cout << 2LL*m << nl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}