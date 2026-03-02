#include <iostream>
using namespace std;
const int M = 1e9 + 7;
int main(){
    long long n,m;
    cin >> n >> m;
    
    cout << ((n*m*1LL) % M) * 2 + 1 << endl;
    return 0;
}