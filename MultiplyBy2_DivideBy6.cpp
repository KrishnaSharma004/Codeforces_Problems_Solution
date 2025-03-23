#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long cnt_3=0;
        long long cnt_2=0;
        while(n>0 && n%3 == 0){
            cnt_3++;
            n/=3;
        }
        while(n>0 && n%2 == 0){
            cnt_2++;
            n/=2;
        }
        if(n>1 || cnt_2 > cnt_3){
            cout << -1 << endl;
        }else 
            cout << cnt_3 + (cnt_3 - cnt_2) << endl;
    }
    return 0;
}