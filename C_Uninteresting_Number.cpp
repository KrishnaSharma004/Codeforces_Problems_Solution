#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

bool canmake(int sum, int cnt2, int cnt3){
    if(sum % 9 == 0) return true;

    bool chk = false;
    if(cnt2 > 0)
    chk = chk || canmake(sum + 2, cnt2 - 1, cnt3);

    if(cnt3 > 0)
    chk = chk || canmake(sum + 6, cnt2, cnt3 - 1);
    
    return chk;
}
void solveANOTHER(){
    string n;
    cin >> n;

    int cnt2 = 0;
    int cnt3 = 0;
    int sum = 0;
    for(int i = 0 ; i < n.size() ; ++i){
        if(n[i] - '0' == 2) cnt2++;
        if(n[i] - '0' == 3) cnt3++;
        sum += n[i] - '0';
    }

    vector<bool> rec(9, false);
    rec[sum % 9] = true;

    for(int i = 0 ; i < cnt2 ; ++i){
        vector<bool> cur_can(9, false);
        for(int r = 0 ; r < 9 ; ++r){
            if(!rec[r]) continue;
            cur_can[r] = true;
            cur_can[(r + 2)%9] = true;
        }
        rec = cur_can;
    }
    for(int i = 0 ; i < cnt3 ; ++i){
        vector<bool> cur_can(9, false);
        for(int r = 0 ; r < 9 ; ++r){
            if(!rec[r]) continue;
            cur_can[r] = true;
            cur_can[(r + 6)%9] = true;
        }
        rec = cur_can;
    }
    cout << (rec[0] ? "Yes" : "No") << '\n';
}
void solve(){
    string n;
    cin >> n;

    int cnt2 = 0;
    int cnt3 = 0;
    int sum = 0;
    for(int i = 0 ; i < n.size() ; ++i){
        if(n[i] - '0' == 2) cnt2++;
        if(n[i] - '0' == 3) cnt3++;
        sum += n[i] - '0';
    }
    if(sum % 9 == 0) cout << "Yes" << '\n';
    else{
        if(cnt2 > 8) cnt2 = 8;
        if(cnt3 > 8) cnt3 = 8;
        if(canmake(sum, cnt2, cnt3)){
            cout << "Yes" << '\n';
        }else{
            cout << "No" << '\n';
        }
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
