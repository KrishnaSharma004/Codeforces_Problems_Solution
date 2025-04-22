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

bool even(int n){
    if(n%2==0) return true;
    return false;
}
void logic(){
    int n,m;
    cin >> n >> m;
    vvint mtx(n,vint(m));
    int sum=0;
    int negcnt = 0;
    int mini = 1e9;
    floop(i,0,n){
        floop(j,0,m){
            cin >> mtx[i][j];
            sum += abs(mtx[i][j]);
            if(mtx[i][j]<0) negcnt++;

            mini = min(abs(mtx[i][j]),mini);
        }
    }
    if(even(negcnt)) cout << sum << nl;
    else cout << (sum - 2*mini) << nl;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}