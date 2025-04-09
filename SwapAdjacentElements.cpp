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
    int n;
    cin >> n;
    int maxi = 0;
    vint a(n);
    floop(i,0,n){
        cin >> a[i];
    }
    str s;
    cin >> s;
    floop(i,0,n){
        maxi = max(maxi,a[i]);
        if(s[i]=='0' && maxi > i+1){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" ;
    return 0;
}
