#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(z) z.begin(), z.end()
const ll INF = 8*1e18;
ll binpowtItr(ll a, ll b){ll res = 1;while(b > 0){if(b & 1){res = res * a;}a *= a;b >>= 1;}return res;}

void krishna(){
    int n, k;
    cin >> n >> k;

    if(k == n-1){
        cout << -1 << '\n';
        return;
    }
    string ans = "";
    int s1 = ceil(k/2.0);
    int s0 = k/2;
    int rem;
    if(k == 0){
        rem = n;
    }
    else if(k == 1){
        rem = n-2;
    }else{
        rem = n - s1-s0-2;
    }
    //cout << "s1 , s0 : " << s1 << s0 << '\n';
    if(s1 > 0){
        ans += "11";
        s1--;
        for(int i = 0; i < s1 ; ++i){
            //cout << " yes ";
            ans += "1";
        }
    }
    if(s0 > 0){
        ans += "00";
        s0--;
        for(int i = 0; i < s0 ; ++i){
            //cout << " no ";
            ans += "0";
        }
    }
    //cout << " rem : " << rem << '\n';
    if(((rem%2) && (k%2))  || k == 1){
        bool here = true;
        for(int i = 0; i < rem-1 ; ++i){
            if(k == 1){
                ans += "0";
                k = 0;
                continue;
            }
            if(here){
                ans += "1";
                here = false;
            }
            else{
                ans += "0";
                here = true;
            }
        }
        ans = "0" + ans;
    }
    else{
        bool here = true;
        for(int i = 0; i < rem ; ++i){
            if(here){
                ans += "1";
                here = false;
            }
            else{
                ans += "0";
                here = true;
            }
        }  
    }
    cout << ans << '\n';
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
