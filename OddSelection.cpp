#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto i:x)

void logic(){
    ll n,x;
    cin >> n >> x;
    int even = 0;
    int odd = 0;
    floop(i,0,n){
        int k;
        cin >> k;
        if(k%2) odd++;
        else even++;
    }
    if(odd == 0){
        cout << "NO" << nl;
        return ;
    }
    for(int i=1;i<=odd;i+=2){
        if(i>x) break;
        if((x-i) <= even ){
            cout << "YES" << nl;
            return ;
        }
    }
    cout << "NO" << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}