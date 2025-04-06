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
    int n,a,b,c,d;
    cin >> n >> a >> b >> c >> d;

    int k = n*(a-b);
    int m = n*(a+b);

    if(k>(c+d) || m<(c-d)) cout << "NO" << nl;
    else cout << "YES" << nl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}