#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> lucky_num;
void digits(){
    queue<ll> q;
    q.push(4);q.push(7);
    while(!q.empty()){
        ll crr = q.front();
        q.pop();
        lucky_num.push_back(crr);
        if(crr <= 1e12){
            q.push(crr*10 + 4);
            q.push(crr*10 + 7);
        }
    }
    sort(lucky_num.begin(), lucky_num.end());
}
void krishna(){
    ll l, r;
    cin >> l >> r;
    digits();
    ll ans = 0;
    ll cur = l;
    for (ll lk : lucky_num) {
        if (cur > r) break;
        if (lk < cur) continue;  
        ll right = min(r, lk);
        ll count = right - cur + 1;
        ans += count * lk;
        cur = right + 1;
    }
    cout << ans << '\n';
}
int32_t main(){
    krishna();
    return 0;
}