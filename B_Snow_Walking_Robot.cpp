#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pp pop_back
#define all(x) x.begin(), x.end()
#define vi vector<int> 
#define vll vector<ll> 
#define vb vector<bool> 
#define vch vector<char>
#define si set<int> 
#define sch set<char> 
#define sll set<ll> 
#define mpii map<int, int> 
#define mpll map<ll, ll> 
#define umpll unordered_map<ll, ll> 
#define umpii unordered_map<int, int> 
#define mpli map<ll, int> 
#define mpil map<int, ll> 
#define vpii vector<pair<int, int>>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define floopinc(i,x,y) for(int i = x; i < y ; ++i)
#define floopdec(i,x,y) for(int i = x; i >= y ; --i)
#define fauto(i,x) for(auto &i : x)
typedef long long ll;
void yn(bool condition){if(condition){yes;}else{no;}}
void ny(bool condition) { yn(!condition);}
int gcd(int a, int b) { if (b == 0) return a;else return gcd (b, a % b);}
int lcm(int a, int b) {return a / gcd(a, b) * b;}
void copyvector(vector<int> &a, vector<int> &res){
    floopinc(i,0,a.size()){res[i] = a[i];}}
int lower_bound(vector<int> &a, int target){int lo = 0, hi = a.size() - 1;
    while(hi-lo > 0){
        int mid = (lo+hi)/2;
        if(a[mid] == target) return mid;if(a[mid] > target) hi = mid;else lo = mid + 1;
    }if(a[lo] >= target) return lo;else return a.size();
}  

void krishna(){
    string s1;
    cin >> s1;
    int d = 0;
    int u = 0;
    int l = 0;
    int r = 0;
    floopinc(i,0,s1.size()){
        if(s1[i] == 'D') d++;
        if(s1[i] == 'U') u++;
        if(s1[i] == 'L') l++;
        if(s1[i] == 'R') r++;
    }
    l = r = min(l,r);
    d = u = min(d,u);
    if(d == 0 || r == 0){
        if(d == 0 && r != 0){
            cout << 2 << '\n';
            cout << "LR" << '\n';
        }
        else if(r == 0 && d != 0){
            cout << 2 << '\n';
            cout << "DU" << '\n';
        }
        else{
            cout << 0 << '\n';
            cout << '\n';
        }
    }
    else{
        cout << 2*l + 2*d << '\n';
        floopinc(i,0,l) cout << "L";
        floopinc(i,0,d) cout << "D";
        floopinc(i,0,r) cout << "R";
        floopinc(i,0,u) cout << "U";
        cout << '\n';
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) krishna();
    return 0;
}