#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto i:x)

void logic(){
    str s;
    cin >> s;
    int n=s.size();
    int suf0 = 0,suf1 = 0;
    floop(i,0,n){
        if(s[i]=='0') suf0++;
        else suf1++;
    }
    int ans = min(suf1,suf0);
    int pref0=0,pref1=0;
    floop(i,0,n){
        if(s[i] == '0') pref0++;
        else pref1++;
        if(s[i]=='0') suf0--;
        else suf1--;

        ans = min(ans,pref1+suf0);
        ans = min(ans,pref0+suf1);
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