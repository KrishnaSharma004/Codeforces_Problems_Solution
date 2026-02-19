#include <bits/stdc++.h>

using namespace std;
#define int long long int 
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()

int32_t main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		vector<int> a(n);
		for(int i = 0 ; i < n ; ++i) cin >> a[i];

		int ans = 0;
		int cur_mx = a[0];
		int mx_diff = 0;

		for(int i = 1; i < n ; ++i){
			if(a[i] < cur_mx){
				ans += cur_mx - a[i];
				mx_diff = max(mx_diff, cur_mx - a[i]);
			}else{
				cur_mx = a[i];
			}
		}
		cout << ans + mx_diff << '\n';
	}
	return 0;
}