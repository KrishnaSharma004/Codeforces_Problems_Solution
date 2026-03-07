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
    
    int n, m, a;
    cin >> n >> m >> a;
    cout << (long long)ceil(m/(a*1.0)) * (long long)ceil(n/(a*1.0)) * 1ll << '\n';
    return 0;
}