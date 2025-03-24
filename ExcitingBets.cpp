#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        if(b>a){
            swap(a,b);
        }if(a==b){
            cout << 0 << " " << 0 << endl;
        }else{
            long long gcd = a - b;
            long long ans = min(b%gcd,gcd-b%gcd);
            cout << gcd << " " << ans << endl;
        }
    }
    return 0;
}