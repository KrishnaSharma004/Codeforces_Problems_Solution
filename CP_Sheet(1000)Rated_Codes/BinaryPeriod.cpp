#include <iostream>
#include <vector>
#include <string>
#include <set>
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
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
void logic(){
    str s;
    cin >> s;
    bool ans = true ;
    int n = s.size();

    floop(i,1,n){
        if(s[i] != s[i-1]){
            ans = false ;
            break;
        }
    }
    if(ans) cout << s << nl;

    else{
        str t= "";
        floop(i,0,n){
            t += "10";
        }
        cout << t <<nl;;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;

}