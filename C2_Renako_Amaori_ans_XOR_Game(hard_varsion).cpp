#include <iostream>
#include <vector>
#include <bit>
#include <numeric>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i)
            cin >> a[i];
        vector<int>  b(n);
        for(int i=0;i<n;++i)
            cin >> b[i];
        int xor_sum = accumulate(a.begin(),a.end(),0,[](int x,int y){return x^y;}) ^ accumulate(b.begin(),b.end(),0,[](int x,int y){return x^y;});
        if(xor_sum){
            int bit = bit_width((unsigned)xor_sum)-1;
            for(int i=n-1;i>=0;--i){
                if((a[i]^b[i])>>bit & 1){
                    cout << (i%2 ? "Mai" : "Ajisai") << "\n";
                    break;
                }
            }
        }
        else 
            cout << "Tie\n" ;
    }
    return 0;
}