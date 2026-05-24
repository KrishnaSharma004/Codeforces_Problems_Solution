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

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        fauto(i,a) cin >> i;
        ll sum = accumulate(all(a), 0ll);
        ll sum_abs = 0;
        ll an = sum;
        int idx = -1;
        floopinc(i,0,n){
            sum -= a[i];
            if(a[i] > 0){
                if(sum-a[i]+sum_abs > an){
                    an = sum-a[i]+sum_abs;
                    idx = i;
                }
            }
            sum_abs += abs(a[i]);
        }
        if(idx == -1){
            cout << 0 << '\n';
            cout << '\n';
            continue;
        }
        vi add;
        vi ans;
        int cnt = 0;
        int i = 0;
        while(i < idx){
            if(a[i] < 0){
                while(i < idx && a[i] < 0){
                    i++;
                }
            }
            else{
                if(i>0 && a[i-1] < 0){
                    add.pb(i);
                    cnt++;
                }
                while(i < idx && a[i] > 0){
                    i++;
                }
                cnt++;
                ans.pb(i);
            }
        }
        cout << cnt+1 << '\n';
        fauto(i,ans) cout << i << " ";
        floopdec(i,add.size()-1,0) cout << add[i] << " ";
        cout << idx+1 << '\n';
    }  
    return 0;
}