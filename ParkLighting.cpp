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
    ll n,m;
    cin >>n >> m;
    if(m%2==0){
        cout << n*(m/2) << nl;
        return ;
    }
    else{
        cout << (n*(m-1)/2)+(n+1)/2 << nl;
        return ;
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