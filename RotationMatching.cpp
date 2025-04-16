#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
#include <unordered_map>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define rr(x) x.begin()+1,x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto i:x)
#define vpint vector<pair<int,int> >
#define umpint unordered_map<int,int>


void logic(){
    int n;
    cin >> n;
    vint a(n+1);
    vint b(n+1);
    vpint v(n+1);
    floop(i,0,n){
        int k;
        cin >> k;
        a[i+1] = k;
        v[i+1].first=k;
        v[i+1].second=i+1;
    }
    floop(i,0,n){
        int k;
        cin >> k;
        b[i+1]=k;
    }
    sort(rr(b));
    umpint mp;
    int maxi=-1;
    int cycle;
    floop(i,1,n+1){
        int x = v[b[i]].second;
        int y=i;
        if(x>=y){
            mp[x-y]++;
            if(mp[x-y] > maxi ) maxi = mp[x-y],cycle=x-y;
        }else{
            mp[x-y+n]++;
            if(mp[x-y+n]>maxi) maxi = mp[x-y+n],cycle=x-y+n;
        }
    }
    vint ans(n);
    floop(i,0,n) ans[(i+cycle)%n] = b[i+1];

    int match = 0;
    floop(i,0,n){
        if(ans[i]==a[i+1]) match++;
    }
    cout << match ;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}