#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n;
    cin >>n ;
    string str;
    cin >> str;

    int count = 0; 
    for(int i = 0; i < n - 2; ++i){
        if(str[i] == str[i + 2]) count++;
    }
    cout << n - 1 - count << '\n';
}

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}