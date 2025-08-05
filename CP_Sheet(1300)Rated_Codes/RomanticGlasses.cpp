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
ll lcm(ll num1,ll num2){
    return (num1*num2)/(gcd(num1,num2));
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
void logic(){
    int n;
    cin >> n;
    vint v(n);
    floop(i,0,n) cin >> v[i];
    vll pe(n,0),po(n,0);
    pe[0]=v[0];
    int flag=0;
    map<ll,int>mp;
    mp[po[0]-pe[0]]++;
    floop(i,1,n){
        po[i]+=po[i-1];
        pe[i]+=pe[i-1];
        if(i%2) po[i]+=v[i];
        else pe[i]+=v[i];

        mp[po[i]-pe[i]]++;
        if(mp[po[i]-pe[i]]==2 || po[i]-pe[i]==0){
            flag=1;
            break;
        }
    }
    if(flag) cout << "Yes" << nl;
    else cout << "No" << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}