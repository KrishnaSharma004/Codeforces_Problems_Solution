#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int cnt_lck = 0;
    while(n>0){
        int lst_digit = n%10;
        if(lst_digit == 4 || lst_digit == 7)
            cnt_lck++;
        n /= 10;
    }
    if(cnt_lck == 4 || cnt_lck == 7)
        cout << "YES" <<'\n';
    else cout << "NO" << '\n';

    return 0;
}