#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    
    string s;
    cin >> s;
    vector<char> contains_s;
    for(int i=0;i<s.size();++i){
        if(s[i] != '+') contains_s.push_back(s[i]);
    }

    sort(contains_s.begin(),contains_s.end());
    for(int i=0;i<contains_s.size();++i){
        if(i != contains_s.size()-1){
            cout << contains_s[i] << "+";
        }else{
            cout << contains_s[i];
        }
    }
    return 0;
}