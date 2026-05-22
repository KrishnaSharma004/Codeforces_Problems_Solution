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
int gcd (int a, int b) { if (b == 0) return a;else return gcd (b, a % b);}
int lcm (int a, int b) {return a / gcd(a, b) * b;}
void copyvector(vector<int> &a, vector<int> &res){
    floopinc(i,0,a.size()){res[i] = a[i];}}
int lower_bound(vector<int> &a, int target){int lo = 0, hi = a.size() - 1;
    while(hi-lo > 0){
        int mid = (lo+hi)/2;
        if(a[mid] == target) return mid;if(a[mid] > target) hi = mid;else lo = mid + 1;
    }if(a[lo] >= target) return lo;else return a.size();
}  

void krishna(){
    int n;
    cin >> n;
    vi a(n);
    fauto(i,a) cin >> i;
    umpii cnt, ops;
    int frst = a[0];
    int st = 0;
    while(true){
        cnt[frst]++;
        ops[frst] = st;

        if(frst == 1) break;
        if(frst&1) frst++;
        else frst /= 2;
        st++;
    }
    if(a[0] == 1){
        cnt[2] = 1;
        ops[2] = 1;
    }
    floopinc(i,1,n){
        int v = a[i];
        int stp = 0;
        while(true){
            if(cnt.find(v) != cnt.end()){
                cnt[v]++ ; ops[v] += stp;
            }
            if(v == 1){
                break;
            }
            if(v & 1){
                v++;
            }
            else{
                v /= 2;
            }
            stp++;
        }
        if(a[i] == 1){
            cnt[2]++; ops[2]++;
        }
    }
    int mn = INT_MAX;
    fauto(i,cnt){
        if(i.s == n){
            mn = min(mn, ops[i.f]);
        }
    }
    cout << mn << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)  
    krishna();
    return 0;
}
