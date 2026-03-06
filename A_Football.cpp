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
    if(str.find("0000000") != string::npos|| str.find("1111111") != string::npos)
        cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}