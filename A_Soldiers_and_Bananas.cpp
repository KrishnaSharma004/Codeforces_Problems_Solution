#include <iostream>
using namespace std;

int main(){
    int k , n , w;
    cin >> k >> n >> w ;
    
    int i=1;
    int total_cost = 0;
    while(i <= w){
        total_cost += i*k;
        i++;
    }
    if(total_cost > n)
        cout << total_cost - n << '\n';
    else cout << 0 << '\n';

    return 0;
}