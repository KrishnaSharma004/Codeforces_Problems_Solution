#include <iostream>
#include <set>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count_up = 0;
    int count_low = 0;
    for(int i=0;i<s.size();++i){
        if(s[i] <= 90 && s[i] >= 65){
            count_up++;
        }else{
            count_low++;
        }
    }
    if(count_low >= count_up){
        for(int i=0;i<s.size();++i){
            if(s[i] <=90 && s[i]>=65){
                s[i] = char(32+int(s[i]));
            }
        }
    }else{
        for(int i=0;i<s.size();++i){
            if(s[i] <= 122 && s[i] >= 97){
                s[i] = char(int(s[i])-32);
            }
        }
    }
    cout << s << endl;
    return 0;
}