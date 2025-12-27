#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        double ans = ceil((n-1)/(1.0*(k-1)));
        cout << (int)ans << "\n";
    }
    return 0;
}