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


int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        vll a(n);
        floop(i,0,n){
            cin >> a[i];
        }
        vll x(q);
        floop(i,0,q){
            cin >> x[i];
        }
        ll prev = 31;
        floop(i,0,q){
            if(x[i]>=prev) continue;
            ll val = pow(2,x[i]);
            floop(j,0,n){
                if(a[j]%val==0){
                    a[j]+=(val/2);
                }
            }
            prev=x[i];
        }
        floop(i,0,n){
            cout << a[i] << sp;
        }
        cout << nl;
    }
    return 0;
}