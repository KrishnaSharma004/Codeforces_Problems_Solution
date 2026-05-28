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

void krishna(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    bool equal = true;
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0; j < m ; ++j){
            cin >> a[i][j];
            if(a[i][j] == 1) equal = false;
        }
    }
    if(equal){
        cout << 0 << '\n';
    }else{
        vpii cell;
        for(int i = 0 ; i < n-1 ; ++i){
            for(int j = 0 ; j < m-1 ;++j){
                if(a[i][j] == 0) continue;
                if(a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==1){
                    cell.pb({i,j});
                }
            }
        }
        bool can = true;
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0; j < m ; ++j){
                if(a[i][j] == 0) continue;
                bool ok = false;
                if(i == 0){
                    if(j == 0){
                        if(a[i][j+1] == 1 && a[i+1][j+1] == 1 && a[i+1][j] == 1){
                            ok = true;
                        }
                    }
                    else if(j == m-1){
                        if(a[i][j-1] == 1 && a[i+1][j] == 1 && a[i+1][j-1] == 1){
                            ok = true;
                        }
                    }
                    else{
                        if((a[i][j-1] == 1 && a[i+1][j] == 1 && a[i+1][j-1] == 1) || (a[i][j+1] == 1 && a[i+1][j+1] == 1 && a[i+1][j] == 1)){
                            ok = true;
                        }
                    }
                }
                else if(i == n-1){
                    if(j == 0){
                        if(a[i][j+1] == 1 && a[i-1][j] == 1 && a[i-1][j+1] == 1){
                            ok = true;
                        }
                    }
                    else if(j == m-1){
                        if(a[i][j-1] == 1 && a[i-1][j] == 1 && a[i-1][j-1] == 1){
                            ok = true;
                        }
                    }
                    else{
                        if((a[i][j-1] == 1 && a[i-1][j] == 1 && a[i-1][j-1] == 1) || (a[i][j+1] == 1 && a[i-1][j] == 1 && a[i-1][j+1] == 1)){
                            ok = true;
                        }
                    }
                }
                else{
                    if((a[i][j-1] == 1 && a[i+1][j] == 1 && a[i+1][j-1] == 1) || (a[i][j+1] == 1 && a[i+1][j+1] == 1 && a[i+1][j] == 1) || 
                        (a[i][j-1] == 1 && a[i-1][j] == 1 && a[i-1][j-1] == 1) || (a[i][j+1] == 1 && a[i-1][j] == 1 && a[i-1][j+1] == 1)){
                            ok = true;
                    }

                }
                if(!ok){
                    can = false;
                    break;
                }
            }
        }
        if(!can){
            cout << -1 << '\n';
        }else{
            cout << cell.size() << '\n';
            fauto(i,cell){
                cout << i.f+1 << " " << i.s+1 << '\n';
            }
        }
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    krishna();
    return 0;
}