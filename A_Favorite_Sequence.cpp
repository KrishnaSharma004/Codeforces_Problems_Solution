#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    vector<int> ans;
    int i = 0;
    int j = n - 1;
    while(i < j){
        ans.push_back(a[i++]);
        ans.push_back(a[j--]);
    }
    if(n&1)
        ans.push_back(a[i]);
    for(int i : ans) cout << i << " ";
    cout << '\n';
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}