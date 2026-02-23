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
        int n;
        cin >> n;
        set<int> a;
        for(int i = 0; i < n ; ++i){
            int x;
            cin >> x;
            a.insert(x);
        }

        if(a.find(67) != a.end()){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
	return 0;
}