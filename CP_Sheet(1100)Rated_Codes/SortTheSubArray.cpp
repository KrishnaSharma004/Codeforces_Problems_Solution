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

void logic(){
    ll n;
    cin >> n;
    ll arr[n];
    ll arr2[n];
    floop(i,0,n) cin >> arr[i];
    floop(i,0,n) cin >> arr2[i];

    int change1=-1,change2=-1;
    floop(i,0,n){
        if(arr[i]!=arr2[i]){
            if(change1==-1){
                change1=i;
            }else{
                change2=i;
                break;
            }
        }
    }
    int i=change1-1;
    while(i>=0){
        if(arr2[i]<=arr2[i+1]){
            i--;
        }else{
            break;
        }
    }
    change1=i+1;
    if(change2==-1){
        change2=n-1;
    }
    int j=change2+1;
    while(j<n){
        if(arr2[j]>=arr2[j-1]){
            j++;
        }else{
            break;
        }
    }
    change2=j-1;
    cout << change1+1 << sp << change2+1 << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}