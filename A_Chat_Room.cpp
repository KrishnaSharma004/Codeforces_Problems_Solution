#include <bits/stdc++.h>

using namespace std;
#define f       first
#define pb      push_back
#define pop     pop_back
#define all(x)  x.begin(), x.end()
#define int     long long

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    string s;
    cin >> s;

    string ck = "";
    int n = s.size();
    int i = 0;
    for(; i < n ; ++i){
        if(s[i] == 'h'){
            ck += s[i];
            break;
        }
    }i++;
    for(; i < n ; ++i){
        if(s[i] == 'e'){
            ck += s[i];
            break;
        }
    }i++;
    for(; i < n ; ++i){
        if(s[i] == 'l'){
            ck += s[i];
            break;
        }
    }i++;
    for(; i < n ; ++i){
        if(s[i] == 'l'){
            ck += s[i];
            break;
        }
    }i++;
    for(; i < n ; ++i){
        if(s[i] == 'o'){
            ck += s[i];
            break;
        }
    }
    cout << (ck == "hello" ? "YES" : "NO") << '\n';
    return 0;
}