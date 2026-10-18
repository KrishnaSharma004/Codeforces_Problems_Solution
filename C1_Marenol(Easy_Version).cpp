#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n;
    cin >> n;
    string a;
    cin >> a;
    string b;
    cin >> b;

    vector<int> cnta(2), cntb(2);
    for(int i = 0 ; i < n ; ++i){
        cnta[i % 2] += a[i] == '1';
        cntb[i % 2] += b[i] == '1';
    }
    cout << (cnta[1] == cntb[1] && cnta[0] == cntb[0] ? "YES" : "NO") << '\n';
    /* MY FIRST SOLUTION : 
    int n;
    cin >> n;
    string a;
    cin >> a;
    string b;
    cin >> b;
 
    if(n <= 2){
        if(a == b) cout << "YES" << '\n';
        else cout << "NO" << '\n';
        return;
    }
    string na = "", nb = "";
    for(int i = 0 ; i < n ; i += 2){
        na += a[i];
        nb += b[i];
    }
    sort(all(na));
    sort(all(nb));
    if(na != nb){
        cout << "NO" << '\n';
        return;
    }
    na = "", nb = "";
    for(int i = 1 ; i < n ; i += 2){
        na += a[i];
        nb += b[i];
    }
    sort(all(na));
    sort(all(nb));
    if(na != nb){
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
    */
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