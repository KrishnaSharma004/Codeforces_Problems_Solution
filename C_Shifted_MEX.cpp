#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];;
        for(int i=0;i<n;++i)
            cin >> a[i];

        sort(a,a+n);
        n = unique(a,a+n) - a;
        int ans = 0;
        for(int i = 0 , j = 0 ; i < n ; i = j ){
            while(j < n && a[j] == a[i] + j - i)
                ++j;
            ans = max(ans, j - i);
        }
        cout << ans << '\n';
    }
    return 0;
}