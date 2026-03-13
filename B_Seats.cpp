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
    
    int t;
    cin >> t;
    while(t--){
        string str;
        int n;
        cin >> n;
        cin >> str;
        int ans = 0;
        str = '1' + str + '1';
        for(int i = 1, l = 0 ; i <= n ; ++i){
            if(str[i] == '0'){
                if(str[i - 1] == '1') l = i;
                if(str[i + 1] == '1'){
                    int c = (l == 1) + (i == n);
                    ans += (i - l + c + 1) / 3;
                }
            }else ++ans;
        }
        cout << ans << '\n';
    }
    
    return 0;
}