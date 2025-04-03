#include <iostream>
#include <vector>
#include <string>
#include <cmath>
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
#define for(i,a,b) for(int i=a;i<=b;++i)
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(k,2,1e8){
            int p= pow(2,k);
            --p;
            if(n%p==0){
                cout << n/p << nl;
                break;
            }
        }
    }
    return 0;
}