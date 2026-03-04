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
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;

        if(n == 2){
            cout << a[1] - a[0] << '\n';
            continue; 
        }
        for(int i = 0 ; i < n - 2 ; ++i){
            a[n - 2] -= a[i];
        }
        cout << a[n - 1] - a[n - 2] << '\n';
    }
    return 0;
}