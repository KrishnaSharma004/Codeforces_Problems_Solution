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

void logic(){
    ll x,y,a,b;
    cin >> x >> y >> a >> b;
    ll total = 0;
    if(x>y){
        swap(x,y);
    }
    total += a*(y-x);
    if(2*a<b) total += x*(2*a);
    else total += x*(b);

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