#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int x;
    cin >> x;
    vector<int> ans;
    int sum = 0, dig = 9;
    while(sum < x && dig > 0){
        ans.push_back(min(x - sum, dig));
        sum += dig;
        dig--;
    }
    if(sum < x){
        cout << -1 << '\n';
    }
    else{
        reverse(ans.begin(), ans.end());
        for(int &i : ans)
            cout << i;
    }
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