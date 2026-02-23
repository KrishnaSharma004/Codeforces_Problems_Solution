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

    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string m;
        cin >> m;
        vector<int> qr(q);
        for(int &i : qr) cin >> i;

        int cnt_a = 0;
        int cnt_b = 0;
        for(int i = 0 ; i < n ; ++i){
            if(m[i] == 'A') cnt_a++;
            else cnt_b++;
        }
        for(int i = 0 ;i < q ; ++i){

            if(cnt_b == 0) cout << qr[i] << '\n';

            else {
                int cnt = 0;
                int j = 0;
                while(qr[i] != 0){
                    if(m[j] == 'A'){
                        qr[i]--;
                    }else{
                        qr[i] /= 2;
                    }
                    cnt++;
                    if(j == n - 1) j = 0;
                    else j++;
                }
                cout << cnt << '\n';
            }
        }
    }
	return 0;
}