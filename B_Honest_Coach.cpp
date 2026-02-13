#include <iostream>
#include <vector>
using namespace std;
#define al(x) x.begin(), x.end()
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> s(n);
        for(int i = 0 ; i < n ; ++i) cin >> s[i];

        sort(al(s));

        int ans = INT_MAX;
        for(int i = 0; i < n-1 ; ++i){
            ans = min(ans, abs(s[i+1] - s[i]));
        }
        cout << ans << '\n';
    }
    return 0;
}