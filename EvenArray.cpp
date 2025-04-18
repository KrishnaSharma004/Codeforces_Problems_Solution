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
    vint a(n);
    floop(i,0,n){
        cin >> a[i];
    }
    int even = 0;
    int odd = 0;
    int fine = 0;
    floop(i,0,n){
        if(i%2==0){
            if(a[i]%2==0) fine++;
            else even++;
        }else{
            if(a[i]%2==1) fine++;
            else odd++;
        }
    }
    if(fine==n) cout << 0 << nl;
    else if(odd==even) cout << even << nl;
    else cout << -1 << nl;
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
