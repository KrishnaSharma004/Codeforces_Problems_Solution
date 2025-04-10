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
    ll n,m,x,y;
    cin >> n >> m >> x >> y;
    ll total = 0;
    vstr s(n);
    floop(i,0,n){
        cin >> s[i];
    }
    floop(i,0,n){
        floop(j,0,m){
            if(s[i][j]=='.' && j+1<m && s[i][j+1]=='.'){
                total += (ll)min(2*x,y);
                j++;
            }else if(s[i][j] == '.'){
                total += (ll)(x);
            }
        }
    }
    cout << total << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}