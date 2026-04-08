#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            cin >> a[i][j];
        }
    }
    char al = 'W';
    for(int i = 0 ; i < n ; ++i){
        char nxt = al;
        for(int j = 0; j < m ; ++j){
            if(a[i][j] == '-'){
                if(nxt == 'W') nxt = 'B';
                else nxt = 'W';
                continue;
            }else{
                a[i][j] = nxt;
                if(nxt == 'W') nxt = 'B';
                else nxt = 'W';
            }
        }
        if(al == 'W') al = 'B';
        else al = 'W';
    }
    for(int i = 0; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}
