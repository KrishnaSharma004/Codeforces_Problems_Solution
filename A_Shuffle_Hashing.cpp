#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pp pop_back
#define all(x) x.begin(), x.end()
#define vi vector<int> 
#define vll vector<ll> 
#define si set<int> 
#define sll set<ll> 
#define mpii map<int, int> 
#define mpll map<ll, ll> 
#define mpli map<ll, int> 
#define mpil map<int, ll> 
#define vpii vector<pair<int, int>>
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
void krishna(){
    string p, h;
    cin >> p;
    cin >> h;
    vector<int> phs(26, 0);
    for(int i = 0 ; i < p.size() ; ++i){
        phs[p[i] - 'a']++;
    }
    bool check = false;
    for(int i = 0 ;i <= (int)(h.size() - p.size()) ; ++i){
        vector<int> temp(26,0);
        for(int j = i ; j < i + p.size() ; ++j){
            temp[h[j] - 'a']++;
        }
        bool ok = true;
        for(int j = 0 ; j < 26 ; ++j){
            if(phs[j] != temp[j]){
                ok = false;
                break;
            }
        }
        if(ok){
            check = true;
            break;
        }
    }
    yn(check);
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)  krishna();
    return 0;
}
