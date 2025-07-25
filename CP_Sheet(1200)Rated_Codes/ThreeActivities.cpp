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
#define as(x) x.begin(),x.end()
#define ds(y) y.rbegin(),y.rend()
#define nl endl
#define str string
#define si set<int>
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto &i:x)
#define vpint vector<pair<int,int> >
#define vpll vector<pair<ll,ll> >
#define umpint unordered_map<int,int>
#define vvint vector<vector<int> > 
#define vpib vector<pair<int,bool> >
#define maxelem(x) *max_element(x.begin(),x.end())
#define minelem(x) *min_element(x.begin(),x.end())
#define MOD (ll)(1e9+7)
bool check(ll mid,vll &hg,ll x){
    ll units=0;
    int n=hg.size();
    floop(i,0,n){
        if(hg[i]<mid){
            units += (mid-hg[i]);
        }
    }
    return units<=x;
}
vint FindMax(vint &arr){
    vpint tmp(arr.size());

    floop(i,0,tmp.size()){
        tmp[i].first=arr[i];
        tmp[i].second=i;
    }
    sort(ds(tmp));
    vint ans(3);
    floop(i,0,3) ans[i]=tmp[i].second;
    return ans;
}
void logic(){
    int n;
    cin >> n;
    vint a(n),b(n),c(n);

    floop(i,0,n) cin >> a[i];
    floop(i,0,n) cin >> b[i];
    floop(i,0,n) cin >> c[i];
    vint maxa=FindMax(a);
    vint maxb=FindMax(b);
    vint maxc=FindMax(c);
    int ans=0;
    floop(i,0,3){
        floop(j,0,3){
            floop(k,0,3){
                int x=maxa[i],y=maxb[j],z=maxc[k];;

                if((x==y) || (y==z) || (z==x)) continue;
                ans=max(ans,a[x]+b[y]+c[z]);
            }
        }
    }
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