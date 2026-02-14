#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    int pos = n - 1;
    while(pos > 0 && a[pos - 1] >= a[pos]) --pos;
    while(pos > 0 && a[pos - 1] <= a[pos]) --pos;

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