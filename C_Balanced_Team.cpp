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
    for(auto &i : a) cin >> i;
    sort(all(a));
    int maxcnt = 1;
    int cnt = 1;
    int i = 0;
    int j = 1;
    while(j < n){
        if(a[j] - a[i] <= 5){
            cnt++;
            j++;
            maxcnt = max(maxcnt, cnt);
        }else{
            if(1 == i - j){
                i++;
                j++;
            } 
            else{
                while(a[j] - a[i] > 5){
                    if(1 == j - i){
                        i++;
                        j++;
                        break;
                    }
                    i++;
                    cnt--;
                }
            }
        }
    }
    cout << maxcnt << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
