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
        string str;
        cin >> str;

        int cnt0 = 0;
        for(int i = 0; i < n ; ++i){
            if(str[i] == '0') cnt0++;
        }
        cout << cnt0 << '\n';
        for(int i = 0 ; i < n; ++i){
            if(str[i] == '0') cout << i + 1 << " ";
        }
        cout << '\n';
    }
    return 0;
}