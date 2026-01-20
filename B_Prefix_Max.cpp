#include <iostream>
#include <numeric>
#include <vector>
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
            
        int max_ele = *max_element(a.begin(),a.end());
        cout << max_ele*n << '\n';
    }
}