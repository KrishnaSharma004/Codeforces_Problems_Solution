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
    str s;
    cin >> s;
    map<char,int> lft,rgt;
    fauto(ch,s) rgt[ch]++;

    int score = 2;
    floop(i,0,n-1){
        lft[s[i]]++;
        if(rgt[s[i]]==1) rgt.erase(s[i]);
        else rgt[s[i]]--;

        int candidate = lft.size()+rgt.size();
        score = max(score,candidate);
    }
    cout << score << nl;
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