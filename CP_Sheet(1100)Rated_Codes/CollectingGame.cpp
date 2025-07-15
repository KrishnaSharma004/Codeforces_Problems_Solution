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
    ll n;
    cin >> n;
    ll a;
    vpll v;
    floop(i,0,n){
        cin >> a;
        v.push_back({a,i});
    }
    vll pre(n);
    sort(rr(v));
    pre[0]=v[0].first;
    floop(i,1,n){
        pre[i]=pre[i-1]+v[i].first;
    }
    vll ans(n);
    floop(i,0,n){
        int j=i;
        int found = i;
        while(j<n){
            pair<ll,ll> temp = {pre[j]+1,INT_MIN};
            ll idx = lower_bound(rr(v),temp)-v.begin();
            idx--;
            if(idx==j){
                break;
            }
            found+=idx-j;
            j=idx;
        }
        ans[v[i].second]= found;
    }
    floop(i,0,n) cout << ans[i] << sp;
    cout << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}