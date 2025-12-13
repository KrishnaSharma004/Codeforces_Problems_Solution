#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    while(k>0){
        if(n%10 == 0){
            n /= 10;
        }
        else{
            n -= 1;
        }
        k--;
    }
    cout << n << endl;

    return 0;
}