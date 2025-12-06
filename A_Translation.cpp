#include <iostream>
using namespace std;
int main(){
    string s,t;
    cin >> s;
    cin >> t;
    int i=0,j=t.size()-1;
    bool check = false;
    if(s.size() != t.size()){
        cout << "NO" << endl;
        return 0;
    }
    while(i<s.size() && j>=0){
        if(s[i] != t[j]){
            check = true;
            break;
        }
        i++;
        j--;
    }
    if(check){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    return 0;
}