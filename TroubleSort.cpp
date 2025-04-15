#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
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
#define vpint vector<pair<int,int> >

void logic(){
    int n;
    cin >> n;
    vpint v(n);
    floop(i,0,n) cin >> v[i].first;
    floop(i,0,n) cin >> v[i].second;

    bool flag=1;
    floop(i,0,n-1){
        if(v[i+1].first >= v[i].first){ }
        else{
            flag=0;
            break;
        }
    }
    if(flag){
        cout << "YES" << nl;
        return ;
    }
    int one = 0;
    int zero = 0;
    floop(i,0,n){
        if(v[i].second == 0) zero++;
        else one++;
    } 
    if(one && zero) cout << "YES" << nl;
    else cout << "NO" <<nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}