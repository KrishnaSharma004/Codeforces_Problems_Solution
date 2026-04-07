#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    vector<int> cnt(26, 0);
    for(int i = 0; i < t.size() ; ++i){
        cnt[t[i] - 97]++;
    }
    vector<int> need(26, 0);
    for(int i = 0; i < s.size() ; ++i){
        need[s[i] - 97]++;
    }
    bool impos = false;
    vector<int> extra(26, 0);
    for(int i = 0 ; i < 26 ; ++i){
        if(cnt[i] - need[i] < 0){
            impos = true;
            break;
        }
        extra[i] = cnt[i] - need[i];
    }
    if(impos) cout << "Impossible" << '\n';
    else{
        vector<char> ans;
        for(int i = 0; i < s.size() ; ++i){
            int k = (int)s[i] - 97;
            for(int j = 0 ; j < k ; ++j){
                for(int time = extra[j] ; time > 0 ; --time){
                    ans.pb((char)(97 + j));
                    extra[j]--;
                }
            }
            ans.pb((char)(k + 97));
        }
        for(int i = 0; i < 26 ; ++i){
            if(extra[i] == 0) continue;
            for(int j = extra[i] ; j > 0 ; --j){
                ans.pb((char)(97 + i));
            }
        }
        for(auto &i : ans) cout << i ;
        cout << '\n';
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
