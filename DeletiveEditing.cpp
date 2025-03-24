#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >>  n;
    while(n--){
        string s,t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        vector <int> freq_t(26,0);
        for(int i=0;i<m;++i){
            freq_t[t[i]-'A']++;
        }
        for(int i=n-1;i>=0;--i){
            if(freq_t[s[i]-'A']>0){
                freq_t[s[i]-'A']--;
            }else s[i] = '.';
        }string final_str = "";
        for(int i=0;i<n;++i){
            if(s[i]!='.'){
                final_str += s[i];
            }
        }
        if(final_str == t){
            cout << "YES" << endl;
        }else cout << "NO" << endl;
    }
    return 0;
}