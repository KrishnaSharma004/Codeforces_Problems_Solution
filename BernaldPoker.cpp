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
    ll n,m,k;
    cin >> n >> m >> k;
    int a = n/k;
    if(a >= m){
        cout << m<< nl;
        return ;
    }else{
        int d = a;
        int c = ceil(1.0*(m-a)/(k-1));
        cout << d-c << nl;
        return;
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