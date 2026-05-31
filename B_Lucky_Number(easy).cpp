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
        if(crr <= 1e10){
            q.push(crr*10 + 4);
            q.push(crr*10 + 7);
        }
    }
    sort(lucky_num.begin(), lucky_num.end());
}
bool super_lucky(ll n){
    int cnt4 = 0;
    int cnt7 = 0;
    bool fl = true;
    while(n){
        int l = n%10;
        if(l != 4 && l != 7) return false;
        if(l == 4) cnt4++;
        if(l == 7) cnt7++;
        n /= 10;
    }
    if(cnt4 == cnt7) return true;
    return false;
}
void krishna(){
    ll n;
    cin >> n;
    digits();
    for(int i = 0 ; i < lucky_num.size() ; ++i){
        if(!super_lucky(lucky_num[i])){
            lucky_num.erase(lucky_num.begin()+i);
            i--;
        }
    }
    ll ans = *lower_bound(lucky_num.begin(), lucky_num.end(), n);
    cout << ans << '\n';
}
int32_t main(){
    krishna();
    return 0;
}