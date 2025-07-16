//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
#include <unordered_map>
#include <deque>
#include <numeric>
#include <algorithm>
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
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto i:x)
#define vpint vector<pair<int,int> >
#define vpll vector<pair<ll,ll> >
#define umpint unordered_map<int,int>
#define vvint vector<vector<int> > 
#define vpib vector<pair<int,bool> >
#define maxelem(x) *max_element(x.begin(),x.end())
#define minelem(x) *min_element(x.begin(),x.end())

void logic(){
    int n,k,s,t;
    cin >> n >> k >> s >> t;
    vll x(n+1),y(n+1);
    floop(i,1,n+1){
        cin >> x[i] >> y[i];
    }
    ll ans = abs(x[s]-x[t]) + abs(y[s]-y[t]);
    ll mins = 1e17,mint = 1e17;
    floop(i,1,k+1){
        mins = min(mins, abs(x[s]-x[i])+abs(y[s]-y[i]));
        mint = min(mint, abs(x[t]-x[i])+abs(y[t]-y[i]));
    }
    ans = min(ans,mins+ mint);
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