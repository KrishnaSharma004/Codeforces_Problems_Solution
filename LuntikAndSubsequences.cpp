#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    long long n;
    cin >> n;
    vector <long long> a(n);
    for(long long i=0;i<n;++i){
        cin >> a[i];
    }//input taken till now
    long long count_of_ones = 0;
    long long count_of_zeros = 0;
    for(long long i=0;i<n;++i){
        if(a[i]==1){
            count_of_ones++;
        }else if(a[i]==0){
            count_of_zeros++;
        }
    }
    long long ways = pow(2,count_of_zeros)*count_of_ones;
    cout << ways << endl;
    }
    return 0;
}