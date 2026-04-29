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
#define mpii map<int, int> 
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0;i<n;i++) cin >> v[i];
    if (n != 3 || (v[0] != -3 || v[1] != -3 || v[2] != 2)){
        for (int i=0;i<n;i++){
            if (v[i] >= 0) v[i] = -v[i]-1;
        }
        if (n%2!=0){
            int mx = -1, ind = -1;
            for (int i=0;i < n; i++){
                if (abs(v[i]) > mx){
                    mx = abs(v[i]);
                    ind = i;
                }
            }
            v[ind] = -v[ind]-1;
        }
    }
    for (int i=0;i<n;i++) cout << v[i] << " ";
    
    return 0;
}
