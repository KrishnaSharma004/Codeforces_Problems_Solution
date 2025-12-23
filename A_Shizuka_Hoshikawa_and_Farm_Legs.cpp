#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans;
        if(n%2==0 && n>=4){
            int mod = n%4;
            ans = (n-mod)/4 + 1;
            cout << ans << endl;
        }
        else if(n==2) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}