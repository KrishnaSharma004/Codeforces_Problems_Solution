#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int mn = min(a,b), mx = max(a,b);
        if(mn * 2 < mx) cout <<  mx * mx << '\n';
        else cout << (mn*2) * (mn*2) << '\n';
    }
    return 0;
}