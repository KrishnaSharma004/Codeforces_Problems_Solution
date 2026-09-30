#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> pt = {"0011","0110","1001","1100"};
    int cnt = 0;
    for(auto it : pt){
        bool fls = true;
        for(int i = 0 ; i < n ; ++i){
            if(s[i] != '?' && s[i] != it[i%4]){
                fls = false;
                break;
            }
        }
        if(fls) cnt++;
    }
    cout << cnt << '\n';
}
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        // cout << "case : " << t << '\n';
        krishna();
    } 
    return 0;
}