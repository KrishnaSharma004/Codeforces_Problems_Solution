#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = 0;
    for(int &i : a){
        cin >> i;
        mx = max(mx, i);
    }

    int pos = -1;
    for(int i = 0; i < n ; ++i){
        if(a[i] != mx) continue;
        if(i > 0 && a[i - 1] != mx) pos = i + 1;
        if(i < n - 1 && a[i + 1] != mx) pos = i + 1;
    }
    cout << pos << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}