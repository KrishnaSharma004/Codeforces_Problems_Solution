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
#define fauto(i,x) for(auto i:x)
#define vpint vector<pair<int,int> >
#define vpll vector<pair<ll,ll> >
#define umpint unordered_map<int,int>
#define vvint vector<vector<int> > 
#define vpib vector<pair<int,bool> >
#define maxelem(x) *max_element(x.begin(),x.end())
#define minelem(x) *min_element(x.begin(),x.end())
#define MOD (ll)(1e9+7)
void logic(){
    int n;
    cin >> n;
    vint a(n);
    floop(i,0,n){
        cin >> a[i];
    }
    sort(as(a));
    vint b(n);
    floop(i,0,n){
        cin >> b[i];
    }
    sort(ds(b));
    ll result = 1;
    floop(i,0,n){
        ll temp = upper_bound(as(a),b[i])-a.begin();
        ll count = a.size() - temp;
        result = result * max(count - i, 0LL) % MOD;
    }
    cout << result << nl;
} 
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}