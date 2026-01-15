#include <iostream>
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

        vector<int> p_min(n);
        vector<int> s_max(n);

        p_min[0] = a[0];
        for(int i=1;i<n;++i){
            p_min[i] = min(p_min[i-1],a[i]);
        }

        s_max[n-1] = a[n-1];
        for(int i=n-2;i>=0;--i){
            s_max[i] = max(s_max[i+1],a[i]);
        }

        string ans = "";
        for(int i=0;i<n;++i){
            if(p_min[i] >= a[i] || a[i] >= s_max[i]){
                ans += '1';
            }else ans += '0';
        }
        cout << ans << '\n';
    }
    return 0;
}