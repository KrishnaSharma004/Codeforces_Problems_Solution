#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int x = 0;
    map<char,int> mp;
    for(int i = 0 ;i < n ; ++i){
        mp[s[i]]++;
    }
    for(auto &i : mp){
        if(i.second % 2 != 0) x++;
    }
    if(k < x-1){
        cout << "no\n";
    }else{
        cout << "yes\n";
    }
}

int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Output.txt","w", stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        //cout << "case : " << t << '\n';
        krishna();
    }
    return 0;
}
