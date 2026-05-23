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
bool chk(vi &a, int d){
    int mid = d;
    int n = a.size();
    bool can_dist = true;
    floopinc(i,0,n){
        int need = (mid/a[i])+1;
        if(d < need){
            can_dist = false;
            break;
        }
        d -= need;
    }
    return can_dist;
}
void krishna(){
    int n;
    cin >> n;
    vi a(n);
    fauto(i,a) cin >> i;
    if(n == 1){
        if(a[0] == 1) cout << -1 << '\n';
        else cout << 1 << '\n';
    }
    else{
        int t_gcd = lcm(a[0], a[1]);
        floopinc(i,2,n){
            t_gcd = lcm(t_gcd, a[i]);
        }
        int lo = 1, hi = 2*t_gcd;
        vi ans;
        while(hi - lo >= 0){
            int mid = (lo + hi)/2;
            if(chk(a,mid)){
                int d = mid;
                floopinc(i,0,n){
                    int need = (mid/a[i])+1;
                    ans.pb(need);
                }
                break;
            }else{
                lo = mid + 1;
            }
        }
        if(ans.size()){
            fauto(i,ans) cout << i << " ";
            cout << '\n';
        }else cout << -1 << '\n';
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)   krishna();
    return 0;
}