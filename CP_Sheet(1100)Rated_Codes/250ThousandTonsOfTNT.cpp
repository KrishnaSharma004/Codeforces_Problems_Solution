#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
#include <unordered_map>
#include <deque>
#include <numeric>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define vtiii vector<tuple<int,int,int> >
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define ull unsigned long long 
#define floop(i,a,b) for(ll i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto i:x)
#define vpint vector<pair<int,int> >
#define umpint unordered_map<int,int>
#define vvint vector<vector<int> > 
#define vpib vector<pair<int,bool> >
#define maxelem(x) *max_element(x.begin(),x.end())
#define minelem(x) *min_element(x.begin(),x.end())

void logic(){
   int n;
   cin >> n;
   vll v(n);
   for(auto &it:v) cin >> it ;
   vll pre(n);
   pre[0]=v[0];
   floop(i,1,n){
    pre[i]=v[i]+pre[i-1];
   }
   ll ans = 0;
   floop(i,1,n){
    if(n%i) continue;
    ll start = i-1;
    ll res = 0;
    ll maxi = pre[start];
    ll mini = pre[start];
    for(ll k = start +i;k<n;k+=i){
        ll curr = pre[k]-pre[k-i];
        maxi=max(maxi,curr);
        mini=min(mini,curr);
    }
    ans = max(ans,maxi-mini);
   }
   cout << ans << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
}