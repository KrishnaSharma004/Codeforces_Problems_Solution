#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i< n;++i)
            cin >> arr[i];

        bool is_sorted = true;
        for(int i =0;i<n-1;++i){
            if(arr[i] > arr[i+1]) is_sorted = false;
        }
        cout << (is_sorted ? "YES\n" : ( k >= 2 ? "YES\n" : "NO\n"));
    }
    return 0;
}