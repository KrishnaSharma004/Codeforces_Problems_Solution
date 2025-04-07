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
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "

void logic(){
    ll a,k;
    cin >> a >> k;

    bool flag = false;
    while(--k){
        ll maxi = a%10;
        ll mini = a%10;
        ll x = a;
        while(x){
            ll last = x%10;
            if(last < mini){
                mini = last ;
            }
            if(last > maxi){
                maxi = last ;
            }
            x=x/10;
        }
        if(maxi==0 || mini ==0 ){
            cout << a << nl;
            flag = true;
            break;
        } 
        a = a+(maxi * mini);
    }
    if(!flag) cout << a << nl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}