#include <iostream>
#include <string>

using namespace std;
int main(){
    string s1,s2;
    cin >> s1;
    cin >> s2;
    //Making all letters off s1 and s2 in lowercase, so that it wil be easy to compare the strings
    for(int i=0;i<s1.size();++i){
        if(s1[i]<92){
            s1[i] += 32;
        }
        if(s2[i]<92){
            s2[i] +=32;
        }
    }
    if(s1<s2){
        cout << -1 << endl;
    }
    if(s2<s1){
        cout << 1 << endl;
    }
    if(s1==s2){
        cout << 0;
    }
    return 0;
}