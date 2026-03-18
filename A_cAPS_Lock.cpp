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

    string temp = str;
    bool flg = false;
    for(int i = 1; i < str.size() ; ++i){
        if(str[i] > 92){
            flg = true;
        }
        temp[i] = tolower(temp[i]);
    }

    if(flg){
        cout << str << '\n';
    }
    else if(temp[0] < 92){
        temp[0] += 32;
        cout << temp << '\n';
    }
    else{
        temp[0] -= 32;
        cout << temp << '\n';
    }
}

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();

    return 0;
}