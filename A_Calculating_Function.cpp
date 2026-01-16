#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    cout << (n&1 ? (0-(n/2+1)) : n/2) << '\n';

    return 0;
}