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

int main(){
    int n,k;
    cin >> n >> k;

    vint a(n);
    floop(i,0,n){
        cin >> a[i];
    }
    vint pref(200005);
    floop(i,0,n){
        pref[i+1] = pref[i] + a[i];
    }
    int min_total = 1e9;
    int index;
    for(int i=0;i<=n-k;++i){
        int total = pref[i+k] - pref[i];
        if(total < min_total){
            min_total = total ;
            index = i+1;
        }
    }
    cout << index << nl;
    return 0;
}