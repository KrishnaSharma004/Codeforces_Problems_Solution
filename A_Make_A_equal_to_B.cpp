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
        vector<int> a(n),b(n);
        int cnta0 = 0, cntb0 = 0;
        
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        for(int i = 0; i < n ; ++i){
            if(a[i] == 0)cnta0++;
            if(b[i] == 0)cntb0++;
        } 
        int mis_mtch = 0;
        for(int i = 0; i < n ; ++i){
            if(a[i] != b[i]) mis_mtch++;
        } 
        if(mis_mtch == 0){
            cout << 0 << '\n';
            continue;
        }
        if(cnta0 == cntb0){
            cout << 1 << '\n';
            continue;
        }
        if(mis_mtch == abs(cnta0 - cntb0)) cout << mis_mtch << '\n';
        else cout << abs(cnta0 - cntb0) + 1 << '\n';
    }
    return 0;
}