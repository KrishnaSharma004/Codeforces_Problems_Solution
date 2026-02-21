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

   
    int n, x;
    cin >> n >> x;

    set<int> a;
    for(int i = 0; i < n ; ++i){
        int e;
        cin >> e;
        a.insert(e);
    }

    int ops = 0;
    for(int i = 0 ; i <= x ; ++i){
        if(i == x){
            if(a.find(i) != a.end()) ops++;
        }
        else{
            if(a.find(i) == a.end()) ops++;
        }
    }
    cout << ops << '\n';

	return 0;
}