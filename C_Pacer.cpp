#include <bits/stdc++.h>

using namespace std;
#define f       first
#define s       second 
#define pb      push_back
#define pop     pop_back
#define all(x)  x.begin(), x.end()
#define int     long long

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, m, a, b;
        cin >> n >> m;
        int px = 0, py = 0;
        int pnts = 0;
        while(n--){
            cin >> a >> b;
            pnts += a - px;
            if((a - px + 2) % 2 != (b - py + 2) % 2) pnts--;
            px = a;
            py = b;
        }
        if(m != px){
            pnts += m - px;
        }
        cout << pnts << '\n';
    }
    return 0;
}