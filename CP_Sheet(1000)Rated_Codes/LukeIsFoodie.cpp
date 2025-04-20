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
    ll x;
    cin >> n >> x;
    vll arr(n);
    floop(i,0,n) cin >> arr[i];

    int changes = 0;
    vll prev = {arr[0]-x,arr[0]+x};
    floop(i,0,n){
        vll cur = {arr[i]-x, arr[i]+x};
        vll overlap = {max(prev[0],cur[0]),min(prev[1], cur[1])};
        if(overlap[0] > overlap[1]){
            changes++;
            prev = cur;
        }else{
            prev = overlap;
        }
    }
    cout << changes << nl;
    return ;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}