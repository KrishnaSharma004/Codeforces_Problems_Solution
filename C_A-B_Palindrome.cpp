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
        int a, b;
        cin >> a >> b;
        string s1;
        cin >> s1;
        int n = a+b;
        if(!(n&1)){
            if(a&1 || b&1){
                cout << -1 << '\n';
                continue;
            }
        }
        int cnt0=0, cnt1=0;
        fauto(i,s1){
            if(i == '0') cnt0++;
            else if(i == '1') cnt1++;
        }
        if(cnt0 > a || cnt1 > b){
            cout << -1 << '\n';
            continue;
        }
        bool chk = false;
        int rem0 = a-cnt0, rem1 = b-cnt1;
        floopinc(i,0,ceil(n/2.0)){
            if(n-i-1 == i){//mid term
                if(a&1 && s1[i] == '1'){
                    chk = true;
                    break;
                }else if(b&1 && s1[i] == '0'){
                    chk = true;
                    break;
                }
                else if(s1[i] == '?'){
                    if(a&1){
                        s1[i] = '0';
                        rem0--;
                    }else{
                        s1[i] = '1';
                        rem1--;
                    }
                }
            }
            else if(s1[n-i-1] == '?' && s1[i] != '?'){
                if(s1[i] == '0' && rem0 > 0){
                    s1[n-1-i] = '0';
                    rem0--;
                }else if(rem1 > 0){
                    s1[n-1-i] = '1';
                    rem1--;
                }
            }else if(s1[n-i-1] != '?' && s1[i] == '?'){
                if(s1[n-1-i] == '0' && rem0 > 0){
                    s1[i] = '0';
                    rem0--;
                }else if(rem1 > 0){
                    s1[i] = '1';
                    rem1--;
                }
            }
            if(s1[n-1-i] != s1[i]){
                chk = true;
                break;
            }
        }
        floopinc(i,0,ceil(n/2.0)){
            if(s1[i] != '?' || s1[n-1-i] != '?') continue;
            if(rem0 >= 2){
                s1[n-i-1] = s1[i] = '0';
                rem0 -= 2;
            }else{
                if(rem1 >= 2){
                    s1[n-i-1] = s1[i] = '1';
                    rem1 -= 2; 
                } 
            }
        }
        if(chk) cout << -1 << '\n';
        else cout << s1 << '\n';
    }  
    return 0;
}