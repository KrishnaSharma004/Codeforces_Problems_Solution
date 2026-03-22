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
    char cur;
    bool flg = false;
    for(int i = 0 ; i < n ; ++i){
        if(str[i] != '?'){
            cur = str[i];
            flg = true;
            break;
        }
    }
    if(!flg){
        for(int i = 0 ; i < n ; ++i){
            cout << "1";
        }
        cout << '\n';
    }else{
        for(int i = 0; i < n ; ++i){
            if(str[i] == '?'){
                str[i] = cur;
            }else cur = str[i];
        }
        cout << str << '\n';
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