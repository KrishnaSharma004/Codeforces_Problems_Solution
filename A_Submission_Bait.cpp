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
        for(int &i : a) cin >> i;
        
        vector<int> hs(n + 1, 0);
        for(int i = 0; i < n ; ++i)
            hs[a[i]]++;

        int chk = 0;
        for(int i = 0 ; i <= n ; ++i){
            if(hs[i] & 1){ 
                chk = 1;
                break;
            }
        }
        if(chk) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}