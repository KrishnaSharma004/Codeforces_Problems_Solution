#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n ; ++i){
            int x;
            cin >> x;
            mp[x]++;
        }

        vector<int> cnt;
        for(auto i : mp){
            cnt.push_back(i.second);
        }
        sort(all(cnt));
        int ans = n;
        for(int c : cnt){
            // number of elements having cnt[i] < c.
            int sm = lower_bound(all(cnt), c) - cnt.begin();
            // number of elements having cnt[i] >= c.
            int bg = cnt.size() - sm;
            ans = min(ans, n - c * bg);
        }
        cout << ans << '\n';
    }
    return 0;
}