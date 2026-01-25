#include <iostream>
#include <vector> 
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    
        long long ans = 0;
        if (a[0] > a[1]) {
            ans += a[0] - a[1];
            a[0] = a[1];
        }
        for (int i = 2; i < n; i += 2) {
            int x = a[i - 1] - a[i - 2];
            if (i < n - 1)
                x = min(x, a[i + 1]);
    
            if (a[i] > x) {
                ans += a[i] - x;
                a[i] = x;
            }
        } 
        cout << ans << '\n';
    }
    return 0;
}