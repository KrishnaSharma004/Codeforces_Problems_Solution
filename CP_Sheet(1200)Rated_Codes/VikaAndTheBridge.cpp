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
#include <set>
#include <queue>
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
ll lcm(ll num1,ll num2){
    return (num1*num2)/(gcd(num1,num2));
}
ll calculatesum(ll start,ll end){
    ll sum = ((start +end)*(end-start +1))/2;

    return sum;
}
void logic(){
    int n,k;
    cin >> n >> k;

    vint v(n);
    floop(i,0,n){
        cin >> v[i];
    }
    vint colours[k+1];

    floop(i,1,k+1){
        colours[i].push_back(0);
    }
    floop(i,0,n){
        colours[v[i]].push_back(i+1);
    }
    floop(i,1,k+1){
        colours[i].push_back(n+1);
    }
    priority_queue<int> jumps[k+1];

    int ans=INT_MAX;

    floop(i,1,k+1){
        for(int j=0;j<colours[i].size()-1;++j){
            jumps[i].push(colours[i][j+1]-colours[i][j]-1);
        }
        int max_val=jumps[i].top();
        jumps[i].pop();

        if(max_val % 2== 0){
            jumps[i].push(max_val/2);
            jumps[i].push((max_val/2)-1);
        }else{
            jumps[i].push(max_val/2);
            jumps[i].push(max_val/2);
        }
        ans = min(ans,jumps[i].top());
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