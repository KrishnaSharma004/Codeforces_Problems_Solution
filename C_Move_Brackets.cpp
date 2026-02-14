#include <iostream>
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n;
    cin >> s;

    int bal = 0;
    int ans = 0;
    for(int i = 0 ;i < n ; ++i){
        if(s[i] == '(') bal++;
        else {
            bal--;
            if(bal < 0){
                bal = 0;
                ans++;
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}