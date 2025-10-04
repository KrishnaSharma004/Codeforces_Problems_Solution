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

void logic(){
    int n;
    cin >> n;
    vint a(n);
    fauto(i,a)
        cin >> i; 

    vvint pos(n + 1);
    floop(i,0,n){
        pos[a[i]].push_back(i);
    } 

    vint ans(n, -1);
    floop(i,1,n+1){
        if (pos[i].empty())
            continue;

        int mx = pos[i][0] + 1;
        floop(j,1,pos[i].size()){
            mx = max(mx, pos[i][j] - pos[i][j - 1]);
        }
        mx = max(mx, n - pos[i].back());

            floop(j,mx-1,n){
            if (ans[j] != -1)
                break;
            ans[j] = i; 
        }
    } 

    for (auto i : ans)
        cout << i << sp; 
    cout << nl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}