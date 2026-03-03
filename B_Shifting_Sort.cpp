#include <bits/stdc++.h>

using namespace std;
#define f       first
#define s       second 
#define pb      push_back
#define pop     pop_back
#define all(x)  x.begin(), x.end()
#define int     long long

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;

        vector<pair<int, int> > ops;
        for(int i = 0; i < n - 1 ; ++i){
            int min_pos = i;
            for(int j = i + 1 ; j < n ; ++j){
                if(a[j] < a[min_pos]) min_pos = j;
            }

            if(min_pos > i){
                ops.pb({i, min_pos});
                int min_ele = a[min_pos];
                for(int j = min_pos ; j > i ; --j){
                    a[j] = a[j - 1];
                }
                a[i] = min_ele;
            }
        }
        cout << ops.size() << '\n';
        for(auto &i : ops)
            cout << i.f + 1 << ' ' << i.s + 1 << ' ' << i.s - i.f << '\n'; 
    }
    return 0;
}