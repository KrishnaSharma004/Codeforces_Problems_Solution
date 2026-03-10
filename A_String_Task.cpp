#include <bits/stdc++.h>

using namespace std;
#define f       first
#define s       second 
#define pb      push_back
#define pop     pop_back
#define all(x)  x.begin(), x.end()
#define int     long long

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    string str;
    cin >> str;

    set<char> set = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'};
    vector<char> ans;
    for(int i = 0 ; i < str.size(); ++i){
        if(set.find(str[i]) == set.end()){
            ans.pb('.');
            if(islower(str[i]))
                ans.pb(str[i]);
            else
                ans.pb((char)(str[i] + 32));
        }
    }
    for(char &i : ans) cout << i ;
    cout << '\n';
    return 0;
}