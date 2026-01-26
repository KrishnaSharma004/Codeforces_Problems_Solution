#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i =0 ;i<n;++i){
        if(s[i] < 97) s[i] += 32;
    }
    vector<int> hs(26);
    for(int i = 0; i < n;++i){
        hs[s[i] - 97]++;
    }
    
    for(int i = 0;i < 26; ++i){
        if(hs[i] < 1){
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';
    return 0;
}