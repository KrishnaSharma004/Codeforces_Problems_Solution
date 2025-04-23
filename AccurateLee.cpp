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
#define vvint vector<vector<int> > 

void logic(){
    int n;
    cin >> n;
    str s;
    cin >> s;
    int zero=0,one=0;
    floop(i,0,n){
        if(s[i]=='0') zero++;
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1') one++;
        else break;
    }
    if(one+zero == n) cout << s << nl;
    else{
        str ans ="";
        floop(i,0,zero)
            ans +=(char)('0');
        ans += (char)('0');
        floop(i,0,one) 
            ans += (char)('1');

        cout << ans << nl;
    }
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}