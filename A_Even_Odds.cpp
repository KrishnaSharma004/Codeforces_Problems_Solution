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
    
    int n, k;
    cin >> n >> k;
    if(k > ceil(n / 2.0))
        cout << (long long)((k - ceil(n / 2.0)) * 2) << '\n';
    else cout << (long long)(2 * k - 1) << '\n';
    return 0;
}