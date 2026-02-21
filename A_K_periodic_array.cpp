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

   
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    int ops = 0;
    for(int i = 0 ; i < k ; ++i){
        int cnt1 = 0;
        int cnt2 = 0;
        int i_ans = n;
        for(int j = i ; j < n ; j += k){
            if(a[j] == 2) cnt2++;
            else cnt1++;
        }
        i_ans = min(cnt1, cnt2);
        ops += i_ans;
    }
    cout << ops << '\n';

	return 0;
}