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
    int n,k;
    cin >> n >> k;
    vint a(n);
    floop(i,0,n){
        cin >> a[i];
    }
    vint b(n);
    floop(i,0,n){
        cin >> b[i];
    }
    sort(rr(a));
    sort(rr(b),greater<> ());
    floop(i,0,k){
        if(a[i]<b[i]) swap(a[i],b[i]);
        else break;
    }
    ll sum = 0;
    floop(i,0,n){
        sum += (ll)a[i];
    }
    cout << sum << nl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}