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
void logic(){
    int n;
    cin >> n;
    mii mp;
    floop(i,0,n){
        int k;
        cin >> k;
        mp[k]++;
    }
    int total = 0;
    int left = 0;
    fauto(i,mp){
        i.second += left;
        total += (i.second/i.first);
        left = i.second%i.first ;
    }
    cout << total << nl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}