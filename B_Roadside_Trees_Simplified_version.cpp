#include <bits/stdc++.h>

using namespace std; 
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()


int32_t main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> ms;
    for(int i = 0; i < n ; ++i){
        int x;
        cin >> x;
        ms.pb(x);
    }
    int ans = ms[0] + 1;
    for(int i = 1; i < n ; ++i){
        ans += (abs(ms[i] - ms[i - 1]) + 2);
    }
    cout << ans << '\n';

    return 0;
}