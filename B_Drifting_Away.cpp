#include <iostream>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    
    int c1 = 0;// '<'
    int c2 = 0;// '>'
    int c3 = 0;// '*'
    for(int i = 0 ;i < n ; ++i){
        if(s[i] == '<') c1++;
        else if(s[i] == '>') c2++;
        else c3++;
    }
    string chk = string(c1, '<') + string(c3, '*') + string(c2, '>');
    if(c3 > 1 || chk != s) cout << -1 << '\n';
    else cout << max(c1+c3, c2+c3) << '\n';
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}