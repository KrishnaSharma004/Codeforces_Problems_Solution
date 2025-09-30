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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
#define ll long long 
#define pint pair<int,int>
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define vbool vector<bool>
#define vtiii vector<tuple<int,int,int> >
#define as(x) x.begin(),x.end()
#define ds(y) y.rbegin(),y.rend()
#define nl endl
#define str string
#define si set<int>
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mint map<int,int>
#define fauto(i,x) for(auto &i:x)
#define vpint vector<pair<int,int> >
#define vpll vector<pair<ll,ll> >
#define umpint unordered_map<int,int>
#define vvint vector<vector<int> > 
#define vvll vector<vector<ll> > 
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
ll calculatesum(ll start,ll end){
    ll sum = ((start +end)*(end-start +1))/2;

    return sum;
}
const ll mod = 1e9+7;
bool pf(ll val,int ind,int x,int mid){
    if(val + (1LL * (ind + 1)*(mid-1))<=x)
        return true;
    return false;
}
int binsearch(ll val,int ind,int x){
    int low = 1,high=1e9+5;
    int ans = 0;

    while(low<=high){
        int mid = (low + high)/2;
        if(pf(val,ind,x,mid)){
            ans=mid;
            low=mid+1;
        }else{
            high = mid -1;
        }
    }
    return ans ;
}
int binarysearch(vll &pmax,int n,int val){
    int low = 0,high=n-1;
    int ans = -1;

    while(low<=high){
        int mid = (low + high)/2;
        if(pmax[mid]<=val){
            ans=mid;
            low=mid+1;
        }else{
            high = mid -1;
        }
    }
    return ans ;
}
ll modl = 998244353;
int ans=0;
int dfs(int node,vvint &adj,str &s){
    if(adj[node].size()==0){
        return s[node-1]=='W'?1:-1;
    }
    int cnt = 0;
    for(auto child:adj[node]){
        cnt +=dfs(child,adj,s);
    }
    cnt += (s[node-1]=='W'?1:-1);
    if(cnt==0) ans++;

    return cnt;
}
ll calculateSumOfFirstX(int x){
    return x*1ll*(x+1)/2;
}
bool check(int n) {
    string s = to_string(n);
    string str = s;
    reverse(s.begin(), s.end());
    return (s == str);
}

const int M = 1e9 + 7;
const int N = 4e4 + 5;


int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vint a;
    floop(i,1,N){
        if (check(i)) 
            a.push_back(i);
    }
    int sz = a.size();

    vint dp(N, 0);
    dp[0] = 1;

    floop(i,0,sz){
        floop(x,1,N){
            if (x - a[i] >= 0)
                dp[x] = (dp[x] + dp[x - a[i]]) % M;
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << nl ;
    }
    return 0;
}