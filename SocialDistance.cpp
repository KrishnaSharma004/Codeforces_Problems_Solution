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
    int n,k;
    cin >> n >> k;
    str s;
    cin >> s;
    int total=0;
    int seg = 2*k+1;
    int val=0;
    if(s[0]=='0'){
        floop(i,0,min(n-1,k)+1) total += (s[i]-'0');
            if(total == 0){
                val++;
                s[0]='1';
            }
    }
        total = 0;
        if(s[n-1]=='0'){
            for(int i=n-1;i>=max(n-1-k,0);i--) total += (s[i]-'0');
            if(total==0){
                val++;
                s[n-1]='1';
            }
        }
        total = 0;
        floop(i,0,n){
            total+=(s[i]-'0');
            if(i>= seg-1){
                if(total==0){
                    val++;
                    s[i-k]='1';
                    total++;
                }
                if(s[i-seg+1]=='1') total--;
            }
        }
        cout << val << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}