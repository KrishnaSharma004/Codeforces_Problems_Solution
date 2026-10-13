#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void krishna(){
    int n;
    cin >> n;

    vector<int> a(n),b(n);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;

    sort(a.begin(), a.end());
    for(int i = 1 ; i < n ; ++i){
        b[i] = b[i] + b[i-1];
    }
    ll levelCrossed = 0;
    int j = 0;
    ll ans = -1;
    int i = 0;
    while(i < n){
        ll noOfSwords = n-i;
        while(j < n && i == 0 && b[j] <= noOfSwords){
            levelCrossed++;
            j++;
        }
        if(i == 0) j--;
        while(j >= 0 && i != 0 && b[j] > noOfSwords){
            levelCrossed--;
            j--;
        }
        if(levelCrossed*a[i] > ans) ans = levelCrossed*a[i];
        while(i < n-1 && a[i] == a[i+1]) i++;

        i++;
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
        // cout << "case : " << t << '\n';
        krishna();
    }
    return 0;
}
