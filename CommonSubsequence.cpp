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
#define umpint unordered_map<int,int>
#define vvint vector<vector<int> > 
#define maxelem(x) *max_element(x.begin(),x.end())
#define minelem(x) *min_element(x.begin(),x.end())
const int mod = 998244353;
void logic(){
        int n,m;
        cin >>n >> m;
        vint a(1005,0);
        int x;
        floop(i,0,n){
            cin >> x;
            a[x] = 1;
        }
        vint b(m);
        floop(i,0,m) cin >> b[i];
        floop(i,0,m){
            x= b[i];
            if(a[x]>0){
                cout << "YES" << nl;
                cout << 1 << sp << x << nl;
                return;
            }
        }
        cout << "NO" << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}

