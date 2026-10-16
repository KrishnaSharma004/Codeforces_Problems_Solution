#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    //soluion 1(from editorial)
    // for(int i = 0 ; i < n ; ++i){
    //     if(a[i] == -1) a[i] = 1;
    //     if(a[i] == 1) break;
    // }
    // for(int i = n -1 ; i >= 0 ; ++i){
    //     if(a[i] == -1) a[i] = 1;
    //     if(a[i] == 1) break;
    // }
    // for(auto &i : a) cout << max(i, 0) << " ";
    // cout << '\n';

    //my solution
    bool changetozero = 0;
    int i=0,j=n-1;
    while(i <= j){
        if(a[i] == 0) i++;
        if(a[j] == 0) j--;

        if(changetozero){
            if(a[i] == -1) a[i] = 0;
            if(a[j] == -1) a[j] = 0;
            i++;j--;
            continue;
        }
        if((a[i] == -1 || a[i] == 1) && (a[j] == -1 || a[j] == 1)){
            a[i] = 1;a[j] = 1;
            changetozero = 1;
            j--;i++;
            continue;
        }
    }
    for(auto &i : a) cout << i << " ";
    cout << '\n';


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
