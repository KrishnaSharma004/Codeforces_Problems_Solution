#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s, t;
        cin >> s;
        cin >> t;

        int n = s.size();
        int m = t.size();
        int idx = 0;
        int chk = 0;
        for(int i = 0 ; i < n ; ++i){
            if(s[i] == t[idx]){
                idx++;
            }
            else{
                if(s[i] == '?'){
                    s[i] = t[idx];
                    idx++;
                }
            }
            if(idx == m){
                chk++;
                idx = 0;
            }
        }
        if(chk){
            cout << "YES" << '\n';
            cout << s << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}