#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt_one = 0;
        int cnt_zero = 0;
        for(int i=0; i<s.length() ;++i){
            if(s[i] == '0'){
                cnt_zero++;
            }else{
                cnt_one++;
            }
        }
        int opr = min(cnt_one,cnt_zero);
        if(opr % 2 != 0){
            cout << "DA" << endl;
        }else{
            cout << "NET" << endl;
        }
    }
    return 0;
}