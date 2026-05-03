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
void solve(){
    string s1,s2;
    cin >> s1;
    cin >> s2;
    bool big_found = false;
    int big = -1;//1 => s1, 2 => s2
    for(int i = 0 ; i < s1.size() ; ++i){
        if(big_found){
            if(s1[i] > s2[i]){
                if(big == 1){
                    swap(s1[i], s2[i]);
                }
            }else{
                if(big == 2){
                    swap(s1[i], s2[i]);
                }
            }
        }else{
            if(s1[i] > s2[i]){
                big_found = true;
                big = 1;
            }
            else if(s1[i] < s2[i]){
                big_found = true;
                big = 2;
            }
        }
    }
    for(auto &i : s1)
        cout << i - '0';
    cout << '\n';
    for(auto &i : s2)
        cout << i - '0';
    cout << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
