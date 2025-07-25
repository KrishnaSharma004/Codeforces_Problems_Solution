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
template<typename T>
void printa(const vector<T> a){
    fauto(p,a) cout << p << sp;
    cout << nl;
}
template<typename T>
istream& operator>>(istream&in,vector<T> &v){
    fauto(e,v) cin >> e ;
    return in;
}
template<typename T1,typename T2>
istream& operator>>(istream&in,pair<T1,T2> &p){
    cin >> p.first >> p.second;
    return in;
}
template<typename T>
void print2d(const vector<vector<T>> &vv){
    fauto(r,vv){
        fauto(i,r) cout << i << " ";
        cout << nl;
    }
}
bool check(vll &a,int x){
    int n=a.size();
    vll b;
    floop(i,0,n){
        if(a[i]!=x){
            b.push_back(a[i]);
        }
    }
    int m=b.size();
    floop(i,0,m){
        if(b[i]!=b[m-i-1]){
            return false;
        }
    }
    return true;
}
void logic(){
    ll n;
    cin >> n;
    vll a(n);
    floop(i,0,n) cin >> a[i];

    floop(i,0,n){
        if(a[i]!=a[n-i-1]){
            if(check(a,a[i])|| check(a,a[n-i-1])){
                cout << "Yes" << nl;
            }else{
                cout << "No" << nl;
            }
            return ;
        }
    }
    cout << "Yes" << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}