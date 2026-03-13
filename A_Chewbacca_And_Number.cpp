#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    ll n;
    cin >> n;
    vector<int> a;
    while(n){
        int lst = n % 10;
        if(n / 10 == 0){
            if(lst == 9){
                a.pb(lst);
            }else if(lst > 4){
                a.pb(9 - lst);
            }else{
                a.pb(lst);
            }
        }else{
            if(lst > 4){
                a.pb((9 - lst));
            }else{
                a.pb(lst);
            }
        }
        n /= 10;
    }
    reverse(all(a));
    for(int &i : a) cout << i;
    
    return 0;
}