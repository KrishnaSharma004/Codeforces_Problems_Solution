#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int f(string s){
    int score = 0;
    int i = 0;
    while(i < s.size()-1){
        if(s[i] == s[i+1]){
            i++;
            continue;
        }
        i++;
        score++;
    }
    score++;
    return score;
}
void krishna(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int i = 1;
    bool p2 = 0,p1 = 0;
    while(i < n-1){
        if(s[i-1] == s[i+1] && s[i] != s[i+1]){
            p2 = 1;
            break;
        }
        else if(s[i] != s[i-1] && s[i] != s[i+1]){
            p1 = 1;
        }
        i++;
    }
    if(p2){
        cout << f(s) - 2 << '\n';
    }else if(p1){
        cout << f(s) - 1 << '\n';
    }else cout << f(s) << '\n';
}   
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        // cout << "case : " << t << '\n';
        krishna();
    }
    return 0;
}


