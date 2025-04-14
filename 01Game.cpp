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

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt_one = 0;
        int cnt_zero = 0;
        for(int i=0; i<s.length() ;++i){
            if(s[i] == '0'){
                cnt_zero++;
            }else{
                cnt_one++;
            }
        }
        int opr = min(cnt_one,cnt_zero);
        if(opr % 2 != 0){
            cout << "DA" << endl;
        }else{
            cout << "NET" << endl;
        }
    }
    return 0;
}