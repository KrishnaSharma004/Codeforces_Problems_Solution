#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n, k;
    cin >> n >> k;
    if(k < n || k > 2*n - 1){
        cout << -1 << '\n';
        return;
    }
    int ct;
    vector<vector<int>> arr(n, vector<int> (n, 0));
    for(int i = 0 ; i <= 2*n-k-1 ; ++i){
        arr[i][i] = i+1;
        ct = i+1;
    }
    for(int i = 0 ;i < n ; ++i)
        for(int j = 0; j < n ; ++j){
            if(arr[i][j] == 0){
                arr[i][j] = ++ct;
            }
        }
    for(auto &i : arr){
        for(auto &e : i){
            cout << e << " ";
        }
        cout << '\n';
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
