#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
#define vi vector<int> 
#define vll vector<ll> 
#define si set<int> 
#define sll set<ll> 
#define mpi map<int, int> 
#define mpll map<ll, ll> 
#define mpli map<ll, int> 
#define mpil map<int, ll> 
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
typedef long long ll;
void yn(bool condition){
    if(condition){
        yes;
    }else{
        no;
    }
}
void ny(bool condition) { yn(!condition);}

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int w,h,d,n;
    cin >> w >> h >> d;
    cin >> n;
    vector<int> wd;
    for(int i = 1 ; i * i <= w ; ++i){
        if(w % i == 0){
            wd.pb(i);
            if(w / i != i){
                wd.pb(w / i);
            }
        }
    }
    vector<int> hd;
    for(int i = 1 ; i * i <= h ; ++i){
        if(h % i == 0){
            hd.pb(i);
            if(h / i != i){
                hd.pb(h/ i);
            }
        }
    }
    vector<int> dd;
    for(int i = 1 ; i * i <= d ; ++i){
        if(d % i == 0){
            dd.pb(i);
            if(d / i != i){
                dd.pb(d/ i);
            }
        }
    }
    for(int i = 0 ; i < wd.size() ; ++i){
        for(int j = 0 ; j < hd.size() ; ++j){
            for(int k = 0 ; k < dd.size() ; ++k){
                if(wd[i]*hd[j]*dd[k] == n){
                    cout << wd[i] - 1 << " " <<  hd[j] - 1 << " " <<  dd[k] - 1 << '\n';
                    return 0;
                }
            }
        }
    }
    cout << -1 << '\n';
    return 0;
}
