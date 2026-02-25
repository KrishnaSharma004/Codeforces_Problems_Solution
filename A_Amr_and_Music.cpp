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

    vector<pair <int, int> >  mp;
    for(int i = 1; i < n + 1 ; ++i){
        int x;
        cin >> x;
        mp.pb({x, i});
    }

    sort(all(mp));
    vector<int> indx;
    int num = 0;
    for(auto &i : mp){
        if( k - i.f < 0){
            break;
        }else{
            k -= i.f;
            num++;
            indx.pb(i.s);
        }
    }
    cout << num << '\n';
    for(int i : indx){
        cout << i << " ";
    }
    cout << '\n';
    return 0;
}