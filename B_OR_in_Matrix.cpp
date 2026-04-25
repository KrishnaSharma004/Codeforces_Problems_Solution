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
void solve(){
    int m, n;
    cin >> m >> n;
    int mat[m][n];
    int nw[m][n];
    for(int i = 0 ; i < m ; ++i){
        for(int j = 0 ; j < n ; ++j){
            cin >> mat[i][j];
            nw[i][j] = 1;
        }
    }
    for(int i = 0 ; i < m ; ++i){
        for(int j = 0 ; j < n ; ++j){
            if(mat[i][j] == 0){
                for(int rw = 0 ; rw < m ; ++rw){
                    nw[rw][j] = 0;
                }
                for(int cl = 0 ; cl < n ; ++cl){
                    nw[i][cl] = 0;
                }
            }
        }
    }
    bool notok = false;
    for(int i = 0 ; i < m ; ++i){
        for(int j = 0 ; j < n ; ++j){
            bool chk = false;
            if(mat[i][j] == 1){
                int cntrw1 = 0;
                int cntcl1 = 0;
                for(int rw = 0 ; rw < m ; ++rw){
                    if(nw[rw][j] == 1) cntrw1++;
                }
                if(cntrw1 == 0){
                    for(int cl = 0 ; cl < n ; ++cl){
                        if(nw[i][cl] == 1) cntcl1++;
                    }
                }
                if(cntrw1 != 0 || cntcl1 != 0){
                    chk = true;
                }
            }else{
                chk = true;
            }
            if(!chk){
                notok = true;
                break;
            }
        }
    }
    if(notok){
        cout << "NO" << '\n';
    }else{
        cout << "YES" << '\n';
        for(int i = 0 ; i < m ; ++i){
            for(int j = 0 ; j < n ; ++j){
                cout <<  nw[i][j] << " ";
                // nw[i][j] = 1;
            }
            cout << '\n';
        }
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
