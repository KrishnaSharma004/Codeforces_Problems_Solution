#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        // cout << "case : " << t << '\n';
        // krishna();
        int n;
        cin >> n;
        string s;
        cin >> s;
        int total0 = count(s.begin(), s.end(), '0');
        if(s[0] == '1'){
            cout << total0 << '\n';
            continue;
        }
        int f_1 = -1;
        for(int i = 0 ; i < n ; ++i){
            if(s[i] == '1'){
                break;
            }
            f_1++;
        }
        if(f_1 == -1){
            cout << 0 << '\n';
            continue;
        }
        vector<int> pre0(n+1, 0), pre1(n+1, 0);
        for(int i = 1 ; i <= n ; ++i){
            pre0[i] = pre0[i-1] + (s[i] == '0');
            pre1[i] = pre1[i-1] + (s[i] == '1');
        }

        int ans = INT_MAX;
        for(int i = f_1 ; i <= n ; ++i){
            //if ith value is set to one then, I have to set all the remaining zeros coming after kth position;
            int cost = pre1[i] + (total0 - 1 - pre0[i]);
            ans = min(ans, cost);
        }
        cout << ans << '\n';
    }
    return 0;
}


