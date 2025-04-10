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
    int n;
    cin >> n;
    vint a(n);
    floop(i,0,n){
        cin >> a[i];
    }
    int answer = 0;
    floop(i,0,31){
        int res = 0;
        fauto(x,a){
            res += x;
            if(x>i) res=0;
            res = max(res,0);
            answer = max(answer,res-i);
        }
    }
    cout << answer << nl;
}
int main(){
    int t=1;
    while(t--){
        logic();
    }
    return 0;
}