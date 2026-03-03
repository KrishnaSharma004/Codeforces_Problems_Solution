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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int res = 1;
        int i = s.find_first_of('*');
        while (true) {
            int j = min(n - 1, i + k);
            for (; i < j && s[j] == '.'; j--){}
                if (i == j) {
                    break;
                }
            res++;
            i = j;
        }
        cout << res << "\n";
    }
    return 0;
}