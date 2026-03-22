#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    
    int cnt_0 = 0;
    int cnt_1 = 0;
    for(int i = 0 ; i < n ; ++i){
        if(str[i] == '0') cnt_0++;
        else cnt_1++;
    }
    if(cnt_0 == n) cout << 0 << '\n';
    else if(cnt_0 & 1){
        cout << cnt_0 << '\n';
        for(int i = 0 ; i < n ; ++i){
            if(str[i] == '0') cout << i + 1 << " ";
        }
        cout << '\n';
    }else if(cnt_0 % 2 == 0 && cnt_1 % 2 == 0){
        cout << cnt_1 << '\n';
        for(int i = 0 ; i < n ; ++i){
            if(str[i] == '1') cout << i + 1 << " ";
        }
        cout << '\n';
    }else{
        cout << -1 << '\n';
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}