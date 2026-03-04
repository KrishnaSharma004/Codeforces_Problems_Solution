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
        string str;
        cin >> str;

        int n = str.size();
        int cntA = 0;
        int cntB = 0;
        int cntC = 0;
        for(int i = 0; i < n; ++i){
            if(str[i] == 'A') cntA++;
            else if(str[i] == 'B') cntB++;
            else cntC++;
        }
        cout << (cntA + cntC == cntB ? "Yes" : "No") << '\n';
    }
    return 0;
}