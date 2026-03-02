#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k ;
        string s;
        cin >> s;

        vector<int> hs(26,0);
        for(int i = 0;i < n; ++i){
            hs[(int)s[i]-97]++;
        }
        int cnt_single = 0;
        for(int i = 0;i<26;++i){
            if(hs[i] == 1) cnt_single++;
        }
        if(n-k == 1) cout << "YES" << '\n';
        else if(n & 1){
            if(cnt_single - k > 1) cout << "NO" << '\n';
            else cout << "YES" << '\n';
        }
        else{
            if(cnt_single - k > 0) cout << "NO" << '\n';
            else cout << "YES" << '\n';
        }
    }
    return 0;
}