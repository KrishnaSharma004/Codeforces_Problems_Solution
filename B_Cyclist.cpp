#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;
void solve(){
    int n, k, p, m;
    cin >> n >> k >> p >> m;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    int win_idx = p - 1;
    int lim = k - 1;
    int count = 0;

    while(m > 0){
        if(win_idx <= lim){
            int temp = a[win_idx];
            if(m - temp < 0) break;
            a.erase(a.begin() + win_idx);
            a.pb(temp);
            count++;
            win_idx = n - 1;
            m -= temp;
        }else{
            int min_idx = min_element(a.begin(), a.begin() + k) - a.begin();
            int temp = a[min_idx];
            if(m - temp < 0) break;
            a.erase(a.begin() + min_idx);
            a.pb(temp);
            win_idx--;
            m -= temp;
        }
    }
    cout << count << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

