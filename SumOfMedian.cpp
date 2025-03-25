#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >>k;

        vector<int> a(n*k);
        for(int i=0;i<a.size();++i){
            cin >> a[i];
        }

        long long ans = 0;
        int i = n*k;
        while(k--){
            i=i-(n/2+1);
            ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}