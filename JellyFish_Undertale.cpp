#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,n;
        cin >> a >> b >> n;
        vector <long long> arr(n);
        for(long long i = 0 ;i<n ;++i){
            cin >> arr[i];
        }//input taken till now
        long long max_time = b;
        for(long long i=0;i<n;++i){
            max_time += min(arr[i],a-1);
        }
        cout << max_time << endl;
    }
    return 0;
}