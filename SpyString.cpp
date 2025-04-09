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

bool check(str k,vstr &s){
    floop(i,0,s.size()){
        int c=0;
        floop(j,0,s[i].size()){
            if(s[i][j] != k[j]) c++;
        }
    if(c>=2) return false;
    }
    return true;
}

void logic(){
    int n,m;
    cin >> n >> m;
    vstr s(n);
    floop(i,0,n){
        cin >> s[i];
    }
    string ans = s[0];
    floop(i,0,m){
        floop(j,0,26){
            str k = ans ; 
            k[i] = ('a' + j);
            if(check(k,s)){
                cout << k << nl;
                return ;
            }
        }
    }
    cout << "-1" << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}