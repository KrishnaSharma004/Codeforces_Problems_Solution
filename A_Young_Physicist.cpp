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
    int sx = 0, sy = 0, sz = 0;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        
        sx += x; sy += y ; sz += z;
    }
    if(sx == 0 && sy == 0 && sz == 0){
        cout << "YES" << '\n';
    }else{
        cout << "NO" << '\n';
    }
    return 0;
}