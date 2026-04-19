#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    string str;
    cin >> str;

    int n = str.size();
    int cnt0 = 0;
    int cnt1 = 0;
    for(int i = 0 ; i < n ; ++i){
        if(str[i] == '0') cnt0++;
        else cnt1++;
    }
    if(n == cnt0 || n == cnt1) cout << 0 << '\n';
    else if(n < 3) cout << 0 << '\n';
    else{
        vector<int> pno0(n);
        int cnt = 0;
        for(int i = 0 ; i < n ; ++i){
            if(str[i] == '0') cnt++;
            pno0[i] = cnt;
        }
        vector<int> pno1(n);
        cnt = 0;
        for(int i = 0 ; i < n ; ++i){
            if(str[i] == '1') cnt++;
            pno1[i] = cnt;
        }
        vector<int> sno0(n);
        cnt = 0;
        for(int i = n - 1 ; i >= 0 ; --i){
            if(str[i] == '0') cnt++;
            sno0[i] = cnt;
        }
        vector<int> sno1(n);
        cnt = 0;
        for(int i = n - 1 ; i >= 0 ; --i){
            if(str[i] == '1') cnt++;
            sno1[i] = cnt;
        }
        int ops = min(cnt0, cnt1);
        for(int i = 0 ; i < n - 1; ++i){
            ops = min(ops, pno1[i] + sno0[i + 1]);
            ops = min(ops, pno0[i] + sno1[i + 1]);
        }
        cout << ops << '\n';
    }
}
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
