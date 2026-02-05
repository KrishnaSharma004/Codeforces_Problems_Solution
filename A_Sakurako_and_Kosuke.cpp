#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    cout << (n & 1 ? "Kosuke\n" : "Sakurako\n");
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;

}