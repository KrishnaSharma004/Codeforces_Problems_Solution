#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    string s1;
    string t;
    cin >> s1;
    cin >> t;
    int count_t_a = 0;
    for(int i = 0; i < t.size() ; ++i){
        if('a' == t[i]) count_t_a++;
    }
    if("a" == t){
        cout << 1 << '\n';
    }
    else if(count_t_a == 0){
        cout << (1ll<<s1.size()) << '\n';
    }
    else{
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
