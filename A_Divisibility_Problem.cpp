#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a , b;
        cin >> a >> b;
        int m = a%b;
        cout <<  (m ? (b - m) : 0) << '\n';
    }
    return 0;
}