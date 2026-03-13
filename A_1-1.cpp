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
        int n;
        cin >> n;
        string str;
        cin >> str;

        for(int i = 1 ; i < n - 1 ; ++i)
            if(str[i - 1] == '1' && str[i + 1] == '1')
                str[i] = '1';
        int mx_cnt = 0;
        for(int i = 0; i < n ; ++i)
            if(str[i] == '1') mx_cnt++;
        for(int i = 1 ; i < n - 1 ; ++i)
            if(str[i - 1] == '1' && str[i + 1] == '1')
                str[i] = '0';
        int mn_cnt = 0;
        for(int i = 0; i < n ; ++i)
            if(str[i] == '1') mn_cnt++;
        cout << mn_cnt << " " << mx_cnt << '\n';
    }
    return 0;
}