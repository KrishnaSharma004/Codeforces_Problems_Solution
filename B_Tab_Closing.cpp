#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,n;
        cin >> a >> b >> n;
        cout << (a == b || (long long) b*n <= a ? "1" : "2" ) << '\n';
    }
    return 0;
}