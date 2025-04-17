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
    vint a(n);
    int total_div = 0;
    int total_sum = 0;
    floop(i,0,n){
        cin >> a[i];
        if(a[i]%k==0) 
            total_div++;
        total_sum+=a[i];
    }
    if(total_div==n){
        cout << -1 << nl;
        return ;
    }else if(total_sum%k!=0){
        cout << n << nl;
        return ;
    }else{
        int mini=0;
        int total = total_sum;
        floop(i,0,n){
            total -= a[i];
            if(total%k){
                mini = max(mini,n-i-1);
                break;
            }
        }
        total = total_sum;
        for(int i=n-1;i>=0;i--){
            total -= a[i];
            if(total%k){
                mini = max(mini,i);
                break;
            }
        }
        cout << mini << nl;
    }
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