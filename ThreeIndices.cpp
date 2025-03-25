#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n+1);
        for(int i=1;i<=n;++i){
            cin >> a[i];
        }
        bool flag = true;
        for(int j=2;j<n;++j){
            if(a[j] > a[j-1] && a[j] > a[j+1]){
                cout << "YES" << endl;
                cout << j-1 << " " << j << " " << j+1 << endl;
                flag = false;
                break;
            }
        }
        if(flag)
        cout << "NO" << endl;
    }
    return 0;
}