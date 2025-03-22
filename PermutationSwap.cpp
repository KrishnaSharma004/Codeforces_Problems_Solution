#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i){
            cin >> a[i];
        }//input le liya hai 
        //ab bawal chiz hai age!!!
        int ney = abs(a[0]-1);
        for(int i=0;i<n;++i){
            ney=gcd(ney,abs(a[i]-(i+1)));
        }
        cout << ney << endl;
    }
    return 0;
}