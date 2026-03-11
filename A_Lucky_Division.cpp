#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()

bool check(int n){
    while(n){
        int ls = n % 10;
        if(ls != 4 && ls != 7){
            return false;
        }
        n /= 10;
    }
    return true;
}

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    cin >> n;

    for(int i = 4; i <= n ; ++i){
        if(n % i == 0){
            if(check(i)){
                cout << "YES" << '\n';
                return 0;
            }
        }
    }
    cout << "NO" << '\n';
    return 0;
}