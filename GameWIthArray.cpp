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

int main(){
    ll n,s;
    cin >> n >> s;
    if(2*n <= s){
        cout << "YES" << nl;
        floop(i,0,n-1){
            cout << 2 << sp;
            s -= 2;
        }
        cout << s << nl;
        cout << 1;
    }else{
        cout << "NO";
    }
    return 0;
}
