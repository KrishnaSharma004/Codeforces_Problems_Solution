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
    ll n;
    cin >> n;
    vint v(n);
    floop(i,0,n){
        cin >> v[i];
    }
    sort(rr(v));
    for(int i=n-1;i>=0;i--){
        if(v[i] <= i+1){
            cout << i+2 << nl;
            return ;
        }
    }
    cout << 1 << nl;
    return ;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0; 
}