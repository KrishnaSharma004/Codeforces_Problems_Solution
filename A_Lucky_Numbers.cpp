#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        int lck_no;
        int lness = INT_MIN;
        while(l<=r){
            int temp = l;
            int mx = -1;
            int mn = 10;
            while(temp>0){
                int l_d = temp%10;
                mx = max(mx,l_d);
                mn = min(mn,l_d);
                temp /= 10;
            }
            if(lness < mx - mn){
                lness = mx - mn;
                lck_no = l;
            }
            if(lness == 9) break;
            l++;
        }
        cout << lck_no << '\n';
    }
    return 0;
}