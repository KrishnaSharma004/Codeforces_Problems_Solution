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
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    sort(all(a));
    sort(all(b));
    bool achance = true;;
    ll sa = 0;
    ll sb = 0;
    while(a.size() || b.size()){
        if(achance){
            if(a.back() < b.back() && b.size()){
                b.pop();
            }
            else if(a.size()){
                sa += a.back();
                a.pop();
            }
            else{
                if(b.size())
                    b.pop();
            }
            achance = false;
        }else{
            if(b.back() < a.back() && a.size()){
                a.pop();
            }else if(b.size()){
                sb += b.back();
                b.pop();
            }
            else{
                if(a.size())
                    a.pop();
            }
            achance = true;
        }
    }
    cout << sa - sb << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
