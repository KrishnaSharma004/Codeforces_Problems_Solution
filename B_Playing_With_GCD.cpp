#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

ll gcd(ll a, ll b){
    return b ? gcd(b, a % b) : a;
}
ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;

        vector<int> b(n + 1);
        b[0] = b[1] = a[0];
        for(int i = 1 ;i < n ; ++i){
            b[i + 1] = a[i];
            int g = gcd(b[i], a[i]);
            int non_cnm = a[i]/g;
            b[i] *= non_cnm;
        }
        bool chk = false;
        for(int i = 0; i < n ; ++i){
            if(gcd(b[i], b[i + 1]) != a[i]){
                chk = true;
                break;
            }
        }
        cout << (chk ? "No" : "Yes") << '\n';
    }
    return 0;
}